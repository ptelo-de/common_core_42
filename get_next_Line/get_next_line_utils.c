/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:51:41 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/05/16 19:20:05 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// void	ft_bzero(void *s, size_t n)
// {
// 	char	*ptr;
// 	size_t	i;

// 	ptr = (char *)s;
// 	i = 0;
// 	while (n > i)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// }
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return(0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	// if (!s1 || !s2)
	// 	return (NULL);
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (join == 0)
		return (0);
	i = 0;
		while (s1 && s1[i])
		{
			join[i] = s1[i];
			i++;
		}
	j = 0;
	while (s2[j])
	{
		join[i + j] = s2[j];
		if (s2[j] == '\n' && j++)
			break;
		j++;
	}
	join[i + j] = 0;
	free(s1);
	return (join);
}

