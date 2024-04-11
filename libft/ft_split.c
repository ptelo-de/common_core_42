/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:04:28 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/11 13:57:17 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*d;

	i = 0;
	d = (char *)malloc(n + 1);
	if (!d)
		return (NULL);
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (d);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	occ;
	size_t	i;

	i = 0;
	occ = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			occ++;
		else if ((s[i] == c && i != 0 && s[i - 1] != c) || (s[i] != c && \
			s[i + 1] == 0))
			occ++;
		i++;
	}
	return (occ);
}

char	**ft_split(char const *s, char c)
{
	int		rl;
	char	**r;
	int		i;
	int		j;
	int		k;

	rl = ft_count_words(s, c);
	r = malloc(sizeof(char *) * (rl + 1));
	if (!r)
		return (0);
	i = -1;
	k = 0;
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			r[k++] = ft_strndup(s + i, j);
			i += j;
		}
	}
	r[k] = 0;
	return (r);
}
/*
int	main(void)
{
	char	*s1;
	char	c;
	char	**re;
	int		i;

	// char *s = "";
	s1 = "hellohellaah";
	c = 'h';
	i = 0;
	re = ft_split(s1, c);
	if (re)
	{
		while (re[i])
		{
			printf("%s\n", re[i]);
			i++;
		}
		i = 0;
		while (re[i])
		{
			free(re[i]);
			i++;
		}
	}
	free(re);
}
*/