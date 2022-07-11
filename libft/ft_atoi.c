/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:23:04 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 20:56:45 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"

// Переводим строку в число

int	ft_atoi(const char *str)
{
	int			i;
	long int	res;
	int			flag;

	i = 0;
	res = 0;
	flag = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || \
	str[i] == '\f' || str[i] == '\n' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		flag = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * flag);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char *n = "\t\v\f\r\n \f-06050";
// 		char *m = "\t\v\f\r\n \f- \f\t\n\r    06050";
// 		printf("%d", ft_atoi(n));
// 		printf("%c", '\n');
// 		printf("%d", ft_atoi(m));
// 		printf("%c", '\n');
// 		printf("%d", ft_atoi(argv[1]));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }