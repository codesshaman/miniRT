/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:42:30 by jleslee           #+#    #+#             */
/*   Updated: 2022/03/31 16:09:55 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"
#include "matrix.h"

int	check_sphere(char **splitline)
{
	if (char_arr_len(splitline) < 6)
		return (1);
	if (check_vector(splitline[1]))
		return (1);
	if (check_float(splitline[2]))
		return (1);
	if (atoff(splitline[2]) < 0)
		return (1);
	if (check_float(splitline[3]) < 0 || check_float(splitline[3]) > 1)
		return (1);
	if (check_float(splitline[4]) < 0 || check_float(splitline[4]) > 1)
		return (1);
	if (check_rgb(splitline[5]))
		return (1);
	return (0);
}

int	check_plane(char **splitline)
{
	if (char_arr_len(splitline) < 6)
		return (1);
	if (check_vector(splitline[1]))
		return (1);
	if (check_orientation(splitline[2]))
		return (1);
	if (atoff(splitline[3]) < 0 || atoff(splitline[3]) > 1)
		return (1);
	if (atoff(splitline[4]) < 0 || atoff(splitline[4]) > 1)
		return (1);
	if (check_rgb(splitline[5]))
		return (1);
	return (0);
}

int	check_cylinder(char **splitline)
{
	if (char_arr_len(splitline) < 8)
		return (1);
	if (check_vector(splitline[1]))
		return (1);
	if (check_orientation(splitline[2]))
		return (1);
	if (check_float(splitline[3]))
		return (1);
	if (atoff(splitline[3]) <= 0)
		return (1);
	if (check_float(splitline[4]))
		return (1);
	if (atoff(splitline[4]) <= 0)
		return (1);
	if (atoff(splitline[5]) < 0 || atoff(splitline[5]) > 1)
		return (1);
	if (atoff(splitline[6]) < 0 || atoff(splitline[6]) > 1)
		return (1);
	if (check_rgb(splitline[7]))
		return (1);
	return (0);
}

int	check_rgb_sides(char **splitline)
{
	if (check_rgb(splitline[10]))
		return (1);
	if (check_rgb(splitline[11]))
		return (1);
	if (check_rgb(splitline[12]))
		return (1);
	if (check_rgb(splitline[13]))
		return (1);
	if (check_rgb(splitline[14]))
		return (1);
	return (0);
}

int	check_cube(char **splitline)
{
	if (char_arr_len(splitline) < 10)
		return (1);
	if (check_vector(splitline[1]) || check_vector(splitline[3]))
		return (1);
	if (check_orientation(splitline[2]))
		return (1);
	if (check_float(splitline[4]) || check_float(splitline[5]))
		return (1);
	if (atoff(splitline[4]) <= 0 || atoff(splitline[5]) <= 0)
		return (1);
	if (check_float(splitline[6]))
		return (1);
	if (atoff(splitline[6]) <= 0)
		return (1);
	if (atoff(splitline[7]) < 0 || atoff(splitline[7]) > 1)
		return (1);
	if (atoff(splitline[8]) < 0 || atoff(splitline[8]) > 1)
		return (1);
	if (check_rgb(splitline[9]))
		return (1);
	if (char_arr_len(splitline) > 10 && (char_arr_len(splitline) != 15 || \
		check_rgb_sides(splitline)))
		return (1);
	return (0);
}
