/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasper <jkasper@student.42Heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:36:38 by jkasper           #+#    #+#             */
/*   Updated: 2022/03/10 19:52:41 by jkasper          ###   ########.fr       */
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
