/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_pars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:58:50 by jleslee           #+#    #+#             */
/*   Updated: 2022/04/08 17:14:03 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "minirt.h"
#include "matrix.h"

t_rgbof	get_color(char *src)
{
	t_rgbof	color;
	int		i;

	color.r = ft_atoi(src);
	i = 0;
	while (src[i] != ',')
		i++;
	color.g = ft_atoi(src + ++i);
	while (src[i] != ',')
		i++;
	color.b = ft_atoi(src + ++i);
	while (src[i] != ',')
	{
		if (src[i] == '\n' || src[i] == '\0')
			return (color);
		i++;
	}
	return (color);
}

t_vector	get_vector(char *src)
{
	t_vector	vec;
	int			i;

	i = 0;
	vec.x = atoff(src);
	while (src[i] != ',')
		i++;
	vec.y = atoff(src + ++i);
	while (src[i] != ',')
		i++;
	vec.z = atoff(src + ++i);
	return (vec);
}
