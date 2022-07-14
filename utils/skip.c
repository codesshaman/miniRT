/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:00:39 by jleslee           #+#    #+#             */
/*   Updated: 2022/04/08 17:23:19 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "gc.h"

void	skip_c(char *s, char *c, size_t *count)
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

void	skip_s(char *s, char *c, size_t *count)
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

size_t	skip(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	free_char_arr(char **arr)
{
	int	i;

	i = 0;
	if (arr == NULL)
		return ;
	while (arr[i] != NULL)
	{
		gc_free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	gc_free(arr);
}

int	char_arr_len(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}
