/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:53:38 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 12:17:24 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

// Применяет к каждому символу строки функцию f

#include "libft.h"
// #include <libft.h>
// #include "ft_strlen.c"
// #include "ft_strdup.c"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = NULL;
	res = ft_strdup(s);
	if (res == NULL)
		return (NULL);
	while (res[i])
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}

// int main(void){
//     printf("%s", ft_strmapi("Hello, world!", mapi_toupper()));
//     return (0);
// }