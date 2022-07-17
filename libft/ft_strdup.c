/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:29:09 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/28 13:29:44 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"
// #include "ft_memcpy.c"

// Дублирует строку str, выделяя
// Под неё память malloc-ом и
// -- Очищая с помощью free

char	*ft_strdup(const char *str)
{
	size_t	n;
	char	*res;

	n = (size_t)(ft_strlen(str) + 1);
	res = NULL;
	res = (char *)malloc(n);
	if (res == NULL)
		return (0);
	ft_memcpy(res, str, n);
	return (res);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char str[7] = "abcdefg";
// 		printf("%s", ft_strdup(str));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }