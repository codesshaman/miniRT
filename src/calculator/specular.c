/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specular.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:39:00 by jleslee           #+#    #+#             */
/*   Updated: 2022/04/11 14:23:23 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "minirt.h"

bool	specular_highlight(
			t_vector *origin, t_obj_l *obj, t_vector *ray, t_vector *result)
{
	if (hit_sphere(origin, obj, ray, result))
		return (true);
	return (false);
}
