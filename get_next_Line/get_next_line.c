/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:13:48 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/05/07 19:19:46 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char *get_next_line(int fd)
{
	static char *buffer;
	char *line;
	int i;

	line = buffer;
	buffer = read(fd, buffer, BUFFER_SIZE);
	i = 0;
	while (buffer[i])
	{
		line[i] = buffer[i];
		if (buffer[i] == '\n')
		{
			
		}
	}
	
}