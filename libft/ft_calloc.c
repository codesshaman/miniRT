/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:29:42 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 20:58:30 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>
//#include "ft_memset.c"

// Выделяем malloc-ом память
// И заполняем её нулями

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = NULL;
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%s", ft_calloc((size_t)4, (size_t)8));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }