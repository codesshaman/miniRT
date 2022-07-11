/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:50:52 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/28 13:30:07 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"
// #include "ft_strlcpy.c"
// #include "ft_strdup.c"

// Обрезка строки s1, если в начале и
// В конце строки встречаются символы
// Из набора set

int	set_check(char const sym, char const *set)
{
	int	i;

	i = 0;
	if (!sym || !set)
		return (0);
	while (set[i] != '\0')
	{
		if (set[i] == sym)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	end;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && set_check(s1[i], set))
		i++;
	end = ft_strlen(s1);
	while (end > i && set_check(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - i + 1));
	if (!str)
		return (NULL);
	while (i < end)
		str[j++] = s1[i++];
	str[j] = 0;
	return (str);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%s", ft_strtrim("abdfrde", "ae"));
// 		printf("%c", '\n');
// 		printf("%s", ft_strtrim(argv[1], argv[2]));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }