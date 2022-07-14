/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylist_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:52:26 by jleslee           #+#    #+#             */
/*   Updated: 2022/03/09 19:52:29 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

t_arraylist	*arraylist_find(t_arraylist *this, void *content)
{
	while (this != NULL)
	{
		if (this->content == content)
			return (this);
		this = this->next;
	}
	return (NULL);
}
