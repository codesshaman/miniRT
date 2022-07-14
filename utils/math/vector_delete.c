/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_delete.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:38:12 by jleslee           #+#    #+#             */
/*   Updated: 2022/04/08 17:35:25 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "gc.h"

void	vector_destroy(t_vector __attribute__((unused)) *this)
{
}

void	vector_delete(t_vector *this)
{
	if (this != NULL)
		gc_free(this);
}
