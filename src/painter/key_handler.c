/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:15:32 by jleslee           #+#    #+#             */
/*   Updated: 2022/04/13 15:00:49 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mlx.h"
#include "gc.h"
#include "minirt.h"

static inline void	free_cam_vecs(t_mixer *self)
{
	size_t	i;

	i = 0;
	while (i < self->res_y)
	{
		gc_free(self->cam.vecs[i]);
		i++;
	}
	gc_free(self->cam.vecs);
}

void	key_escape(t_mixer *p_null)
{
	t_obj_l	*tmp;
	t_obj_l	*tmp2;

	mlx_destroy_window(p_null->p_mlx_init, p_null->p_mlx_window);
	renderer_image_delete(p_null->image);
	tmp = p_null->obj_list;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		gc_free(tmp);
		tmp = tmp2;
	}
	gc_free(p_null->col_sum.sum);
	gc_free(p_null->col_sum.fac);
	free_cam_vecs(p_null);
	gc_free(p_null);
	gc_exit(0);
}

int	key_handler(int key, t_mixer *p_null)
{
	if (key == ESC_KEY)
		key_escape(p_null);
	return (0);
}

int	key_redcross(t_mixer *p_null)
{
	key_escape(p_null);
	return (0);
}
