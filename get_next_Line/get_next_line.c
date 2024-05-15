/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:13:48 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/05/15 19:34:07 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_read_and_check(char *buffer, unsigned int size, int fd)
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
int	ft_isfullline(char *buffer)
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

void	ft_okspollish(char *buffer) 
{
	int i;
	int j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		// printf("%c\n", buffer[i]);
		buffer[i] = '\0';
		i++;
	}

	if (buffer[i] == '\n') // so apaga uma quebra
	{
		buffer[i] = 0;
		i++;
	}
	j = 0;
	while (buffer[i])
	{
		buffer[j] = buffer[i];
		buffer[i] = 0;
		j++;
		i++;
	}
}

char	*get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1]; //tollow("aaaaaa") BUFFER_SIZE = 0 quebra o codigo negativo tambem
	//static	char *buffer = "Aaaaa":
	char *line;
	int bytesread = BUFFER_SIZE;
	if (fd < 0 || BUFFER_SIZE <= 0) // nao da para controlar pois o buffersize e editavel no terminal 
		return(NULL);
		line = NULL;
		line = ft_strjoin(line, buffer);
	while (bytesread == BUFFER_SIZE)
	{
		bytesread = read(fd, buffer, BUFFER_SIZE); // ver se o read deevolve null terminated
		if (bytesread == -1)
		{
			if(line)
				free(line);
			return(NULL);
		}
		line = ft_strjoin(line, buffer);
		//printf("bytesread: %d\nbuffer: %s\n",bytesread, buffer);
		//write(1, &buffer, sizeof(buffer) - 1);
		//buffer = ft_strchr(buffer, '\n') + 1;
		if (ft_isfullline(line))
			break;
	}
		ft_okspollish(buffer);
	return (line);
}
