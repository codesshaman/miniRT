/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:31:23 by jleslee           #+#    #+#             */
/*   Updated: 2022/04/26 17:31:24 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
#include "libft.h"
#include "parser.h"
#include "matrix.h"

int	add_ambient(char **line, t_ambient *ambient)
{
	if (line == NULL)
		return (5);
	ambient->a_light = atoff(line[1]);
	ambient->color = get_color(line[2]);
	ambient->color.cal_r = ambient->color.r;
	ambient->color.cal_g = ambient->color.g;
	ambient->color.cal_b = ambient->color.b;
	free_char_arr(line);
	return (0);
}

int	add_camera(char **line, t_cam *camera)
{
	if (line == NULL)
		return (5);
	camera->position = get_vector(line[1]);
	camera->normal = get_vector(line[2]);
	camera->ey = get_vector(line[3]);
	vector_normalize(&(camera->normal));
	camera->fov = ft_atoi(line[4]);
	vector_normalize(&(camera->ey));
	free_char_arr(line);
	return (0);
}
