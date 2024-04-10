/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:10:51 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/10 20:51:00 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	c;
	size_t	i;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	len--;
	while (h[i] && i < len)
	{
		c = 0;
		while (h[i + c] && n[c] && i + c < len && h[i + c] == n[c])
			c++;
		if (c == ft_strlen(n))
			return (h + i - 1);
		i++;
	}
	return (0);
}
