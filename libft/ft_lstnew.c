/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:07:26 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/27 16:53:48 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Bonus Part******************//

#include "libft.h"

// Создаёт новый список

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = NULL;
	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

// list->content = content; - создаём 
// элемент content со значением content
// list->next = NULL; - обнуляем следующий 
//элемент для удобства перечисления (while(lst->next != NULL))