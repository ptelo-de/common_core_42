/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:51:41 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/05/14 23:07:15 by ptelo-de         ###   ########.fr       */
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
	if(s1) // cenas do jorge
	{		
		while (s1[i])
		{
			join[i] = s1[i];
			i++;
		}
	}
	j = 0;
	while (s2[j])
	{
		join[i + j] = s2[j];
		if (s2[j] == '\n')
		{
			j++;
			break;
		}
		j++;
	}
	join[i + j] = 0;
	free(s1);
	return (join);
}

// size_t	ft_strlcpy(char *dest, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	lsrc;

// 	lsrc = ft_strlen(src); 
// 	if (size == 0)
// 		return (lsrc);
// 	i = 0;
// 	while (i < (size - 1) && src[i])
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = 0;
// 	return (lsrc);
// }

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	ls;

	i = 0;
	ls = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)(s + (int)(ft_strlen(s))));
	while (i <= ls)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	void	*array;
// 	size_t	max;

// 	max = nmemb * size;
// 	if (nmemb && size && max / size != nmemb)
// 		return (NULL);
// 	array = malloc(max);
// 	if (!array)
// 		return (NULL);
// 	ft_bzero(array, max);
// 	return (array);
// }
