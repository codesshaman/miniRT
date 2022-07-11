/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:08:08 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/27 16:51:44 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Bonus Part******************//

#include "libft.h"

// Возвращает последний элемент списка

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}