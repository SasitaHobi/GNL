/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shobi <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:17:02 by shobi             #+#    #+#             */
/*   Updated: 2023/01/26 00:22:42 by shobi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// Macros

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// Includes

//TODO remove this shit
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

// main file
char	*get_next_line(int fd);

// utils file
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *string, int searchedChar);
void	*ft_calloc(size_t elementCount, size_t elementSize);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
#endif
