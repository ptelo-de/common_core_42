/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:07:55 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/10 20:48:59 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	total;
	size_t	i;
	size_t	lsrc;
	size_t	ldst;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	total = lsrc + ldst;
	i = 0;
	if (ldst < size - 1)
	{
		while (i < (size - ldst - 1) && src[i])
		{
			dst[ldst + i] = src[i];
			i++;
		}
		dst[ldst + i] = '\0';
		return (total);
	}
	else
		return (size + lsrc);
}
