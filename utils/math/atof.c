/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atof.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:29:10 by jleslee           #+#    #+#             */
/*   Updated: 2022/03/08 19:29:44 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skipspaces(char *str, int *count)
{
	int	i;

	i = *count;
	while (str[i] != '\0' && str[i] != '-' && str[i] != '+' && (str[i] == ' ' \
	|| str[i] == '\t' || str[i] == '\n'))
		i++;
	*count = i;
	if (str[i] == '\0')
		return (-1);
	if (str[i] >= '0' && str[i] <= '9')
		return (0);
	if (str[i] == '-')
	{
		(*count)++;
		return (1);
	}
	if (str[i] == '+')
	{
		(*count)++;
		return (0);
	}
	return (-1);
}

static float	addafter(int digit, int decimals)
{
	int		i;
	float	ret;

	ret = digit;
	i = 0;
	while (i++ < decimals)
		ret /= 10;
	return (ret);
}

static float	atofloop(char *str, int i, int ii, int sw)
{
	float	ret;

	ret = 0;
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] == '.' && !sw))
	{
		if (str[i] == '.')
		{
			ii = 0;
			sw = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9' && !sw)
		{
			ret *= 10;
			ret += str[i] - '0';
		}
		else
			ret += addafter(str[i] - '0', ii);
		i++;
		ii++;
	}
	return (ret);
}

float	atoff(char *str)
{
	int		i;
	int		min;
	float	ret;

	i = 0;
	min = skipspaces(str, &i);
	if (min == -1)
		return (0);
	ret = atofloop(str, i, 0, 0);
	if (min)
		return (ret * -1);
	return (ret);
}
