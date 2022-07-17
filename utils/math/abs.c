/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:37:29 by jleslee           #+#    #+#             */
/*   Updated: 2022/03/07 16:37:30 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

#include "abs.h"

long	labs(long value)
{
	if (value == LONG_MIN)
		return (value);
	if (value < 0)
		return (value * -1);
	return (value);
}

int	abs(int value)
{
	if (value == INT_MIN)
		return (value);
	if (value < 0)
		return (value * -1);
	return (value);
}
