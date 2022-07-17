/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:10:02 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/28 13:55:56 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// Перевод заглавного символа в строчный

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%c", ft_tolower('S'));
// 		printf("%c", '\n');
// 		printf("%c", ft_tolower('A'));
// 		printf("%c", '\n');
// 		printf("%c", ft_tolower('Z'));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }