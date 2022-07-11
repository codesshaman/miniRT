/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:06:37 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/27 21:42:27 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"
// #include "ft_memcmp.c"

// Находит первое вхождение (первый бит)
// Строки little внутри строки big или
// Возвращает NULL при остутствии строки

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;
	size_t	big_len;
	size_t	size;

	if (*little == '\0')
		return ((char *)big);
	lit_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (big_len < lit_len || len < lit_len)
		return (0);
	if (big_len > len)
		size = len;
	else
		size = big_len;
	while (size-- >= lit_len)
	{
		if (ft_memcmp(big, little, lit_len) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%d", ft_strnstr("abcdfg", "fg", (size_t)6));
// 		printf("%c", '\n');
// 		printf("%d", ft_strnstr("babcd", "c", (size_t)3));
// 		printf("%c", '\n');
// 		printf("%d", ft_strnstr("abcde", "d", (size_t)6));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }