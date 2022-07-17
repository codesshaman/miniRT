/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:17:43 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:11:48 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

// Переводит int в ascii (число в строку)

#include "libft.h"

static int	ft_itoa_size(long nbr)
{
	int		size;

	size = 1;
	if (nbr < 0)
		size++;
	while (nbr / 10 != 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

static void	ft_itoa_fill(char *sptr, int *index, long nbr)
{
	if (nbr >= 10)
	{
		ft_itoa_fill(sptr, index, nbr / 10);
		ft_itoa_fill(sptr, index, nbr % 10);
	}
	else
	{
		sptr[*index] = nbr + '0';
		(*index)++;
	}
}

char	*ft_itoa(int n)
{
	char	*sptr;
	int		index;
	long	nbr;

	nbr = n;
	sptr = (char *) ft_calloc(ft_itoa_size(nbr) + 1, 1);
	if (!sptr)
		return (NULL);
	index = 0;
	if (nbr < 0)
	{
		sptr[index++] = '-';
		nbr *= -1;
	}
	ft_itoa_fill(sptr, &index, nbr);
	sptr[index] = 0;
	return (sptr);
}

//#include <stdio.h>
// int main(void){
//     printf("%s", ft_itoa(68));
//     printf("%c", '\n');
//     printf("%s", ft_itoa(0));
//     printf("%c", '\n');
// 	printf("%s", ft_itoa(2147483647));
//     printf("%c", '\n');
//     printf("%s", ft_itoa(-2147483648));
//     printf("%c", '\n');
//     return (0);
// }
