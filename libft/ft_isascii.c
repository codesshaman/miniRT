/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:52:27 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:02:33 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// Возвращаем 1, если переданный
// Символ присутствует в ascii,
// Иначе возвращаем 0.

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		int i = '\0';
// 		int a = '\n';
// 		int b = 'я';
// 		printf("%d", ft_isascii(i));
// 		printf("%c", '\n');
// 		printf("%d", ft_isascii(a));
// 		printf("%c", '\n');
// 		printf("%d", ft_isascii(b));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }