/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:03:45 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 10:36:06 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// Перевод строчного символа в заглавный

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%c", ft_toupper('d'));
// 		printf("%c", '\n');
// 		printf("%c", ft_toupper('a'));
// 		printf("%c", '\n');
// 		printf("%c", ft_toupper('z'));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }