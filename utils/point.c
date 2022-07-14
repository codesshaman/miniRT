/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:37:17 by jleslee           #+#    #+#             */
/*   Updated: 2022/04/08 17:35:19 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"
#include "gc.h"

t_point	*point_new(long x, long y)
{
	t_point	*ret;

	ret = gc_malloc(sizeof(struct s_point));
	if (ret == NULL)
		return (NULL);
	point_create(ret, x, y);
	return (ret);
}

void	point_create(t_point *this, long x, long y)
{
	if (this == NULL)
		return ;
	this->x = x;
	this->y = y;
	this->r = 1;
	this->g = 1;
	this->b = 1;
}

void	point_destroy(t_point *this)
{
	if (this == NULL)
		return ;
}

void	point_delete(t_point *this)
{
	if (this == NULL)
		return ;
	gc_free(this);
}
