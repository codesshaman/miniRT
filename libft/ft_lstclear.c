/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:35:56 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 13:56:59 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Bonus Part******************//

#include "libft.h"

// Удаляет всю цепочку списка, освобождает память
// И ставит в NULL значение указателя на список

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;
	t_list	*next;

	elem = *lst;
	while (elem != NULL)
	{
		next = elem->next;
		ft_lstdelone(elem, del);
		elem = next;
	}
	*lst = NULL;
}
