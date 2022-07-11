/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:34:09 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:01:45 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// Возвращаем 1, если передана
// Буква, иначе возвращаем 0

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		int i = '0';
// 		int a = 'A';
// 		int b = 'b';
// 		printf("%d", ft_isalpha(i));
// 		printf("%c", '\n');
// 		printf("%d", ft_isalpha(a));
// 		printf("%c", '\n');
// 		printf("%d", ft_isalpha(b));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }