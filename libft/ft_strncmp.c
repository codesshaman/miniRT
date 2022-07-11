/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:38:21 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/27 21:29:11 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"

// Сравнение двух строк с ограничением
// Количества сравниваемых символов (от
// 0 до n), 0 если разницы нет, -1 если
// отличный бит меньше, 1 если больше.

int	ft_strncmp(const char *arr1, const char *arr2, size_t n)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	i = 0;
	b1 = (unsigned char *)arr1;
	b2 = (unsigned char *)arr2;
	while ((b1[i] || b2[i]) && i < n)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char dst[] = "asbdfb";
// 		char src[] = "abcdef";
// 		int n = ft_strncmp(dst, src, (size_t)3);
// 		printf("%d", n);
// 		printf("%c", '\n');
// 		printf("%s", dst);
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }