/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abs.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:37:45 by jleslee           #+#    #+#             */
/*   Updated: 2022/03/07 16:37:46 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ABS_H
# define ABS_H
#include "libft.h"
#include "gc.h"

/*
 * Returns the absolute value of the given long. Always returns a positive
 * value. If the given number is the smallest possible number, the given number
 * is simply returned.
 */
void	gc_exit(int code);

/*
 * Returns the absolute value of the given int. Always returns a positive
 * value. If the given number is the smallest possible number, the given number
 * is simply returned.
 */
void	gc_free(void *ptr);
void	*gc_malloc(size_t size);
char	**strsplit(char const *s, char *c);
void	skip_c(char *s, char *c, size_t *count);
void	skip_s(char *s, char *c, size_t *count);
size_t	skip(const char *s);

#endif
