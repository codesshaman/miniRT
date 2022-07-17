/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:58:34 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 20:57:31 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>
//#include "ft_memset.c"

// Заполняем ячейки массива нулями
// *dest - указатель на массив
// s - количество заполняемых ячеек

void	ft_bzero(void *b, size_t n)
{
	ft_memset(b, 0, n);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char arr[4] = "abcd";
// 		ft_bzero(arr, (size_t)4);
// 		printf("%s", arr);
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }