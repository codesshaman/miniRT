/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:16:35 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/28 13:30:54 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"
// #include "ft_memchr.c"

// Поиск последнего вхождения символа
// Код которого указан в ch

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (ft_isascii((char)c) == 0)
		return (NULL);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

// int main()
// {
// 		char arr[6] = "135687";
// 		printf("%d", ft_strrchr(arr, '5'));
// 		printf("%c", '\n');
// 	return (0);
// }