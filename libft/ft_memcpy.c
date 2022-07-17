/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:29:41 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:17:51 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// Копирует n бит из src в dest

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t			i;

	if (!dest && !src)
		return (0);
	new_dest = dest;
	new_src = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*new_dest++ = *new_src++;
	return (dest);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char src[7] = "src_str";
// 		char dst[7] = "dst_str";
// 		ft_memcpy(dst, src, (size_t)3);
// 		printf("%s", dst);
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }