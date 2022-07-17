/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:05:43 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:13:12 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"

//#include <stdio.h> // Для printf в main
//#include "ft_atoi.c" // Для main

// Поиск в массиве символа, код которого задан
// Если символ найден, возвращается его адрес
// Если после n байт не найден, возвращается NULL

void	*ft_memchr(void const *s, int c, size_t n)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (n--)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char str[8] = "abcdefgh";
// 		printf("%d", ft_memchr(str, 104, (size_t)8));
// 		//printf("%d", ft_memchr(argv[1], ft_atoi(argv[2]), (size_t)argv[3]));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }