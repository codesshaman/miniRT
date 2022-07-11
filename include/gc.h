/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abs.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasper <jkasper@student.42Heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:37:45 by jkasper           #+#    #+#             */
/*   Updated: 2022/03/07 16:37:46 by jkasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABS_H
# define ABS_H
#include "libft.h"

/*
 * Returns the absolute value of the given long. Always returns a positive
 * value. If the given number is the smallest possible number, the given number
 * is simply returned.
 */
void	ft_gc_exit(int code);

/*
 * Returns the absolute value of the given int. Always returns a positive
 * value. If the given number is the smallest possible number, the given number
 * is simply returned.
 */
void	ft_gc_free(void *ptr);
void	*ft_gc_malloc(size_t size);

#endif
