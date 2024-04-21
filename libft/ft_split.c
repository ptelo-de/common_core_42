/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:21:59 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/21 19:35:27 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	printf("%zu\n", occ);
	return (occ);
}
static char	**ft_free(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		ft_bzero(array[i], ft_strlen(array[i])*sizeof(char));
		free(array[i++]);
	}
	free(array);
	return (NULL);
}
static char	**ft_writewords(char **r, char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	i = -1;
	k = 0;
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			r[k] = ft_substr(s, i, j);
			if ( !r[k])
				return (ft_free(r));
			i += j;
			k++;
		}
	}
	r[k] = NULL;
	return (r);
	
}
char	**ft_split(char const *s, char c)
{
	char	**r;

	if (!s)
		return (NULL);
	//r = ft_calloc((ft_count_words(s, c) + 1), sizeof(char));
	r = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!r)
		return (NULL);
	
	return (ft_writewords(r, s, c));
}

/* int	main(void)
{
	char	*s1;
	char	c;
	char	**re;
	int		i;

	s1 = ft_strdup("hellohellaah");
	c = 'h';
	i = 0;
	//printf("aaa\n");
	re = ft_split(s1, c);
	free(s1);
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
} */


	//char **res;
	//int	i = 0;
	//res = ft_split(s, 32);
	// while (i < 10)
	// {
	// 	printf("str[%i]: %s\n", i,res[i]);
	// 	i++;
	// }
	return (0);
}
	
