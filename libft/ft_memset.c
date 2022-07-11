/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:40:04 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:18:59 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// dest - заполняемый массив, 
// char - символ для заполнения, 
// n - кол-во заполняемых ячеек

void	*ft_memset(void *dest, int ch, size_t n)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = (char *)dest;
	while (i < n)
	{
		arr[i] = ch;
		i++;
	}
	return ((char *)dest);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char arr[4] = "abcd";
// 		ft_memset(arr, '1', (size_t)4);
// 		printf("%s", arr);
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }