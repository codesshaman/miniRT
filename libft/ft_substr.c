/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:54:17 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/28 13:55:19 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"

// Создаёт подстроку строки s
// Начиная с start длинной len

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*sub;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	sub = NULL;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

// int main(void){
// 	printf("%s", ft_substr("abcdefgkl", 0, (size_t)3));
// 	printf("%c", '\n');
// 	printf("%s", ft_substr("abcdefgkl", 3, (size_t)3));
// 	printf("%c", '\n');
// 	printf("%s", ft_substr("abcdefgkl", 6, (size_t)3));
// 	printf("%c", '\n');
// 	printf("%s", ft_substr("abcdefgkl", 9, (size_t)3));
// 	return (0);
// }