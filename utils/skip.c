/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasper <jkasper@student.42Heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:00:39 by jkasper           #+#    #+#             */
/*   Updated: 2022/04/08 17:23:19 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "gc.h"

void	ft_skip_c(char *s, char *c, size_t *count)
{
	size_t	i;
	size_t	ii;

	i = *count;
	while (s[i] != '\0')
	{
		ii = 0;
		while (c[ii] != '\0')
		{
			if (s[i] == c[ii])
				break ;
			ii++;
		}
		if (c[ii] != '\0')
			break ;
		i++;
	}
	*count = i;
}

void	ft_skip_s(char *s, char *c, size_t *count)
{
	size_t	i;
	size_t	ii;

	i = *count;
	while (s[i] != '\0')
	{
		ii = 0;
		while (c[ii] != '\0')
		{
			if (s[i] == c[ii])
				break ;
			ii++;
		}
		if (c[ii] == '\0')
			break ;
		i++;
	}
	*count = i;
}

size_t	ft_skip(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_free_char_arr(char **arr)
{
	int	i;

	i = 0;
	if (arr == NULL)
		return ;
	while (arr[i] != NULL)
	{
		ft_gc_free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	ft_gc_free(arr);
}

int	ft_char_arr_len(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}
