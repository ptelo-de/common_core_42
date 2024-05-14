/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:54:29 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/05/14 23:04:52 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif
char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
int read_and_check(char *buffer, unsigned int size, int fd);
void okspollish(char *buffer);
char *get_next_line(int fd);
#endif