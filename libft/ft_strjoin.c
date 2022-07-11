/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:05:20 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/27 17:01:54 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"
// #include "ft_strlcat.c"

// Конкатенация двух строк

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%s", ft_strjoin("\0", "\0"));
// 		printf("%c", '\n');
// 		printf("%s", ft_strjoin(argv[1], argv[2]));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }