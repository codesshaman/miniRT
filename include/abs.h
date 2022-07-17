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

/*
 * Returns the absolute value of the given long. Always returns a positive
 * value. If the given number is the smallest possible number, the given number
 * is simply returned.
 */
long	labs(long value);

/*
 * Returns the absolute value of the given int. Always returns a positive
 * value. If the given number is the smallest possible number, the given number
 * is simply returned.
 */
int		abs(int value);

#endif
