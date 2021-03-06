/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:38:20 by jleslee           #+#    #+#             */
/*   Updated: 2022/04/08 17:33:55 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>
#include "vector.h"
#include "gc.h"

t_vector	*vector_new(float x, float y, float z)
{
	t_vector	*ret;

	ret = gc_malloc(sizeof(struct s_vector));
	if (ret != NULL)
		vector_create(ret, x, y, z);
	return (ret);
}

void	vector_create(t_vector *this, float x, float y, float z)
{
	if (this == NULL)
		return ;
	this->x = x;
	this->y = y;
	this->z = z;
}

float	vector_length(t_vector *this)
{
	if (this == NULL)
		return (0);
	return (sqrtf(this->x * this->x + this->y * this->y + this->z * this->z));
}

void	vector_normalize(t_vector *this)
{
	float	l;

	l = 1 / vector_length(this);
	vector_multiply_digit(this, this, l);
}

void	vector_print(t_vector *vec)
{
	if (vec == NULL)
		printf("(null)");
	else
		printf("%f | %f | %f\n", vec->x, vec->y, vec->z);
}
