/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:10:47 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/09 21:10:48 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strndup(const char *s, size_t n)
{
	size_t i;
	char *d;

	i = 0;
	d = (char *)malloc(n + 1);
	if (d == 0)
		return (0);
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (d);
}