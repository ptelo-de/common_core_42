/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:21:59 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/22 16:45:55 by ptelo-de         ###   ########.fr       */
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
	r = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!r)
		return (NULL);
	return (ft_writewords(r, s, c));
}
/* int		main()
{
	char s[] = "       Split                      geralmente da problema com count words!\0";

	printf("%zu\n", ft_count_words(s, ' '));
	char **r = ft_split(s, 32);
	//(void)r;
	int i = 0;
	while (i <= ft_count_words(s, 32) + 1)
	{
		printf("%s\n", r[i]);
		i++;
	printf("here\n");
	}
    return (0);

} */

	
