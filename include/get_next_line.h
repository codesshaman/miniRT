/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:47:54 by jleslee           #+#    #+#             */
/*   Updated: 2021/11/25 20:47:55 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
/*
 * Returns the next line of the file indicated by the given file descriptor.
 * If nothing else to read is left, or an error occures, null is returned.
 */
char				*get_next_line(int fd);
# define GNL_BUFFER	100

#endif
