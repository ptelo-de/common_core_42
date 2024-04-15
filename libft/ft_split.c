/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:21:59 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/15 11:52:53 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	d[i] = '\0';
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
		else if ((s[i] == c && i != 0 && s[i - 1] != c) || (s[i] != c && s[i
					+ 1] == 0))
			occ++;
		i++;
	}
	return (occ);
}

static void	ft_freewords(char **r, int i)
{
	while (i >= 0)
	{
		free(r[i]);
		i--;
	}
	free(r);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	int		i;
	int		j;
	int		k;

	r = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
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
			r[k] = ft_strndup(s + i, j);
			if (!(r[k++]))
				ft_freewords(r, k);
			i += j;
		}
	}
	r[k] = NULL;
	return (r);
}
/* 
int	main(void)
{
	char	*s1;
	char	c;
	char	**re;
	int		i;

	//char *s = "";
	s1 = "lorem ";
	c =  'z';
	i = 0;
	re = ft_split(s1, c);
	if (re)
	{
		while (re[i] != NULL)
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
}  */
