/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:12:51 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/10 20:54:09 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	void	*suf;
	size_t	c;

	sub = malloc(len + 1);
	if (sub == 0)
		return (0);
	c = 0;
	while (s[start] && c < len)
	{
		sub[c] = s[start];
		start++;
		c++;
	}
	sub[c] = 0;
	c++;
	if (c <= len)
	{
		suf = sub + c;
		free(suf);
	}
	return (sub);
}
