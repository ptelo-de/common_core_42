/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:13:48 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/05/16 19:14:40 by ptelo-de         ###   ########.fr       */
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
	while (buffer[i])//falha quando buffersize e maior do que o numero de byter que eu quero manter no buffer
	{
		buffer[j] = buffer[i];
		buffer[i] = 0;
		j++;
		i++;
	}
}

char	*get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1]; //BUFFER_SIZE = 0 quebra o codigo negativo tambem
	char *line;
	int bytesread;

	if (fd < 0 || BUFFER_SIZE <= 0) // nao da para controlar pois o buffersize e editavel no terminal 
		return(NULL);
	bytesread = BUFFER_SIZE;
	line = NULL;
	while (bytesread != 0)//read retorna 0 quando encontra EOF
	{
		if (!*buffer)
			bytesread = read(fd, buffer, BUFFER_SIZE);
		if (bytesread == -1)
		{
			if(line)
				free(line);
			return(NULL);
		}
		line = ft_strjoin(line, buffer);
		if (!*line)	
		{
			return(NULL);
		}
		ft_okspollish(buffer);
		if (ft_isfullline(line))
			break;
	}
	return (line);
}
/*RAZOES PARA BUFFER SER UM ARRAY:
1) Conserva sempre o ultimo \0 deste a declaracao
2) Ao contrario da string literal, tem um tamanho fixo de elementos,
3) Permiteme alterar e nao apenas aceder a cada elemento da string
*/