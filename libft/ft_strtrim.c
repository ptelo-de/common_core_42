/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:12:36 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/10 20:53:17 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	start;
	size_t	end;

	if (s1 == 0 || !(set))
		return (0);
	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	r = malloc(end - start + 1);
	if (r == 0)
		return (0);
	ft_strlcpy(r, s1 + start, end - start + 1);
	return (r);
}
