/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:11:29 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/27 21:25:55 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include "ft_strlen.c"
// #include <stdio.h>

// Копирует из src в dest символы,
// Устанавливая в конец строки
// Нуль-терминант, возвращает
// Длинну src + dest

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (n < dst_len + 1)
		return (n + src_len);
	if (n >= dst_len + 1)
	{
		while (src[i] && (dst_len + 1 + i) < n)
		{
			dest[dst_len + i] = src[i];
			i++;
		}
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char dst[] = "svdvfd";
// 		char src[] = "abcdef";
// 		size_t n = ft_strlcat(dst, src, (size_t)argv[1]);
// 		printf("%d", n);
// 		printf("%c", '\n');
// 		printf("%s", dst);
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }