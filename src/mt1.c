/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:28:01 by jleslee           #+#    #+#             */
/*   Updated: 2022/07/13 11:12:32 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>

#include "minirt.h"

static inline void	add_to_rendered_rays(size_t pixels)
{
	static size_t			rendered_pixels = 0;
	static bool				m_init = false;
	static pthread_mutex_t	mutex;

	if (!m_init)
	{
		pthread_mutex_init(&mutex, NULL);
		m_init = true;
	}
	pthread_mutex_lock(&mutex);
	printf("\r\r\r\r\r\r\r%.2f %%", ((double)++rendered_pixels \
	/ (double) pixels) * 100);
	pthread_mutex_unlock(&mutex);
}

static inline void	render_ray(t_thread *self,
								t_vector *ray,
								size_t x,
								size_t y)
{
	t_rgbof	color;

	color = calc_first_ray_of_the_day(self->mixer, ray);
	draw_point(x, y, self->mixer->image, color);
	add_to_rendered_rays(self->mixer->res_y * self->mixer->res_x);
}

static bool	rt_block_fetcher(t_tile **tile_array,
							t_tile *render,
							size_t iteration,
							t_thread *self)
{
	size_t	tiles_per_axis;
	size_t	next;
	size_t	x;
	size_t	y;

	tiles_per_axis = ceil((double) self->mixer->res_y / BLOCK_SIZE);
	next = self->index + (self->mixer->cores * iteration);
	x = next % tiles_per_axis;
	y = next / tiles_per_axis;
	if (x < tiles_per_axis && y < tiles_per_axis)
	{
		*render = tile_array[x][next / tiles_per_axis];
		return (true);
	}
	return (false);
}

void	rt_runner(t_thread *self)
{
	t_tile	to_render;
	size_t	numbers[4];

	numbers[3] = 0;
	while (rt_block_fetcher(self->mixer->tile_array, &to_render,
			numbers[3], self))
	{
		numbers[3]++;
		numbers[0] = to_render.x;
		numbers[2] = to_render.x + (ceil((double) BLOCK_SIZE
					* self->mixer->cam.aspect_ratio));
		while (numbers[0] < numbers[2] && numbers[0] < self->mixer->res_x)
		{
			numbers[1] = to_render.y;
			while (numbers[1] < to_render.y + BLOCK_SIZE
				&& numbers[1] < self->mixer->res_y)
			{
				render_ray(self,
					&(self->mixer->cam.vecs[self->mixer->res_y - \
					numbers[1] - 1][numbers[0]]), numbers[0], numbers[1]);
				numbers[1]++;
			}
			numbers[0]++;
		}
	}
}
