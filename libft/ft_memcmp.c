/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:52:21 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:17:08 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// Сравнение двух массивов посимвольно
// 0 если массивы идентичны
// 1 если первый отличный бит больше,
// -1 если первый отличный бит меньше

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	int				i;
	unsigned char	*b1;
	unsigned char	*b2;

	i = 0;
	b1 = (unsigned char *)arr1;
	b2 = (unsigned char *)arr2;
	while (n--)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%d", ft_memcmp("abcdf", "abcde", (size_t)5));
// 		printf("%c", '\n');
// 		printf("%d", ft_memcmp("abcde", "abcde", (size_t)5));
// 		printf("%c", '\n');
// 		printf("%d", ft_memcmp("abcde", "abcdf", (size_t)5));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }