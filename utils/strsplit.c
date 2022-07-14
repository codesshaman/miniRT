/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:53:20 by jleslee           #+#    #+#             */
/*   Updated: 2022/04/08 17:40:08 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "gc.h"

static char	**ft_freeman(char **restr, size_t count)
{
	size_t	i;

	i = count;
	while (restr[i] != NULL)
	{
		gc_free(restr[i]);
		i++;
	}
	gc_free(restr);
	return (NULL);
}

static char	**ft_callsplit(char *s, size_t count, size_t i, size_t ii)
{
	char	**rs;

	rs = ft_calloc(count + 1, sizeof(char *));
	if (rs == NULL)
		return (NULL);
	if (ii >= i + 1)
	{
		rs[count - 1] = ft_strdup(s + i);
		if (rs[count - 1] == NULL)
			return (ft_freeman(rs, count));
	}
	return (rs);
}

static char	**ft_recsplit(char *s, char *c, size_t count)
{
	size_t	i;
	size_t	ii;
	char	**rs;

	i = 0;
	skip_s(s, c, &i);
	ii = i;
	skip_c(s, c, &ii);
	count++;
	if (i >= skip(s) || ii >= skip(s))
	{
		rs = ft_callsplit(s, count, i, ii);
		if (rs == NULL)
			return (NULL);
		return (rs);
	}
	rs = ft_recsplit(s + ii, c, count);
	if (rs == NULL)
		return (NULL);
	rs[count - 1] = ft_substr(s, i, ii - i);
	if (rs[count - 1] == NULL)
		return (ft_freeman(rs, count));
	return (rs);
}

char	**strsplit(char const *s, char *c)
{
	if (s == NULL)
		return (NULL);
	return (ft_recsplit(((char *)s), c, 0));
}
