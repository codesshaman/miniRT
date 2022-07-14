/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:36:38 by jleslee           #+#    #+#             */
/*   Updated: 2022/03/10 19:52:41 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"
#include "matrix.h"

int	check_vector(char *str)
{
	int	i;

	i = 0;
	if (check_vec_float(str, &i))
		return (1);
	if (str[i++] != ',')
		return (1);
	if (check_vec_float(str, &i))
		return (1);
	if (str[i++] != ',')
		return (1);
	if (check_vec_float(str, &i))
		return (1);
	return (0);
}

int	check_orientation(char *str)
{
	int	i;

	i = 0;
	if (atoff(str + i) < -1 || atoff(str + i) > 1)
		return (1);
	if (check_vec_float(str, &i))
		return (1);
	if (str[i++] != ',')
		return (1);
	if (atoff(str + i) < -1 || atoff(str + i) > 1)
		return (1);
	if (check_vec_float(str, &i))
		return (1);
	if (str[i++] != ',')
		return (1);
	if (atoff(str + i) < -1 || atoff(str + i) > 1)
		return (1);
	if (check_vec_float(str, &i))
		return (1);
	return (0);
}

int	check_rgb(char *str)
{
	int	i;

	i = 0;
	if (check_rgb_int(str, &i))
		return (1);
	if (str[i++] != ',')
		return (1);
	if (check_rgb_int(str, &i))
		return (1);
	if (str[i++] != ',')
		return (1);
	if (check_rgb_int(str, &i))
		return (1);
	return (0);
}
