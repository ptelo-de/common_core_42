/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:13:48 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/05/08 21:13:59 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *buffer;
	char *line;
	int i;

	buffer = malloc(sizeof(char *));
	line = buffer;
	if(read(fd, buffer, BUFFER_SIZE)== -1)
	{
		return (NULL);
	}
	i = 0;
	while (buffer[i++])
	{
		line[i] = buffer[i];
		if (buffer[i] == '\n')
		{
			ft_bzero(buffer + i, 1);
			return(line);
		}
	if(read(fd, buffer, BUFFER_SIZE)== -1)
	{
		//printf("aaaaaa\n");
		return (NULL);
	}
	}
	return(free(line), NULL);
}