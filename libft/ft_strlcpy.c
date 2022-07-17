/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:03:32 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/27 21:28:39 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include "ft_strlen.c"
//#include <stdio.h>

// Копирует из src в dest n - 1
// Символов, устанавливая в конец
// Строки нуль-терминант, возвращает
// Длинну получившейся строки

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (n == 0)
		return (len);
	i = 0;
	while (i < n - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char dst[] = "svdvfd";
// 		char src[] = "234324423423";
// 		size_t n = *ft_strlcpy(dst, src, (size_t)5);
// 		printf("%s", n);
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }