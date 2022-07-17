/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:56:14 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:03:38 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// Возвращаем 1 если передан
// Печатаемый символ,
// Иначе возвращаем 0

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		int i = '\0';
// 		int a = '3';
// 		int b = 'f';
// 		printf("%d", ft_isprint(i));
// 		printf("%c", '\n');
// 		printf("%d", ft_isprint(a));
// 		printf("%c", '\n');
// 		printf("%d", ft_isprint(b));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }