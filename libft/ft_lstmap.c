/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:02:07 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 15:02:24 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Bonus Part******************//

#include "libft.h"

// Создаёт новый список, полученный в результате
// Последовательного применения функции f к каждому
// Элементу заданного через указатель *lst списка.
// Если не удаётся создать новый список, его элементы
// Очищаются при помощи функции del и free (ft_lstclear)

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*elem;

	if (lst == NULL || f == NULL)
		return (NULL);
	res = NULL;
	while (lst)
	{
		elem = ft_lstnew((*f)(lst->content));
		if (!elem)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, elem);
		elem = elem->next;
		lst = lst->next;
	}
	return (res);
}
