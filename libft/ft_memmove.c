/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:42:44 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:18:23 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// Копирует n бит из src в dest
// Которые могут пересекаться

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dest);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char src[7] = "src_str";
// 		char dst[7] = "dst_str";
// 		ft_memmove(dst, src, (size_t)3);
// 		printf("%s", dst);
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }