/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:13:48 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/05/14 23:18:34 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	read_and_check(char *buffer, unsigned int size, int fd)
{
	int	i;
	int	bytesread;

	i = 0;
	if (!buffer[0])
		bytesread = read(fd, buffer, size);
	while (buffer[i])
	{
		if (buffer[i] == '\n' || bytesread != size)
			return (0);
		i++;
	}
	return (1);
}
int	isfullline(char *buffer)
{
	int	i;

	i = 0;
	while(buffer[i])
	{
		if (buffer[i] == '\n')
			return(1);
		i++;
	}
	return(0);
}

// void	okspollish(char *buffer) 
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	while (buffer[i] && buffer[i] != '\n')
// 	{
// 		// printf("%c\n", buffer[i]);
// 		buffer[i] = '\0';
// 		i++;
// 	}

// 	if (buffer[i] == '\n') // so apaga uma quebra
// 	{
// 		buffer[i] = 0;
// 		i++;
// 	}
// 	j = 0;
// 	while (buffer[i])
// 	{
// 		buffer[j] = buffer[i];
// 		j++;
// 		i++;
// 	}
// }

char	*get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
	//static	char *buffer;
	char *line;
	int bytesread = BUFFER_SIZE;
	// if (read(fd, buffer, 0) == -1)// missing test fd and check if i can even read 0 bytes
	// 	return (NULL);
	line = NULL;
	while (bytesread == BUFFER_SIZE)
	{
		bytesread = read(fd, buffer, BUFFER_SIZE); // ver se o read deevolve null terminated
		line = ft_strjoin(line, buffer);
		buffer = ft_strchr(buffer, '\n') + 1;
		//printf("%s\n", line);
		if (isfullline(line))
			break;
	}
	return (line);
}