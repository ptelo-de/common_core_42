/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:21:59 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/23 19:57:07 by ptelo-de         ###   ########.fr       */
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
        if (s[i] != c && s[i])
        {
            occ++;
            //printf("%c\n", s[i]);
            while (s[i] && s[i] != c)
                i++;
            if(!s[i])
                break;
        }
		i++;
	}
	return (occ);
}
static void ft_free(char **r, int k)
{
	int		i=1;
	k--;
	while (k >= 0)
	{
		free(r[k]);
		k--;
		i++;
	}
	free(r);
}

static char	**ft_writewords(char **r, char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	i = -1;
	k = 0;
	while (s[++i] && k < (int)ft_count_words(s,c))
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			r[k] = ft_substr(s, i, j);
			if (!r[k])
			{
				ft_free(r,k);
				return (NULL);
			}
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
	r = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!r)
		return (NULL);
	return (ft_writewords(r, s, c));
}
/* int		main()
{
	char s[] = "St ge da pa cm ct ws!";

	printf("%zu\n", ft_count_words(s, ' '));
	char **r = ft_split(s, 32);
	//(void)r;
	int i = 0;
	while (i < 8)//(int)ft_count_words(s, ' ') + 1)
	{
		printf("%s\n", r[i]);
		i++;
	}
	ft_free(r, 7);

    return (0);

} */

	
