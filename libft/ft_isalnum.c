/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:48:49 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:00:06 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_isdigit.c"
// #include "ft_isalpha.c"

// Возвращаем 1 если передано
// Число или буква, иначе
// Возвращаем 0

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		int t = '3';
// 		int i = '!';
// 		int s = 's';
// 		printf("%d", ft_isalnum(t));
// 		printf("%c", '\n');
// 		printf("%d", ft_isalnum(i));
// 		printf("%c", '\n');
// 		printf("%d", ft_isalnum(s));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }