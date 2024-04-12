/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:07:55 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/12 22:27:59 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	total;
	size_t	i;
	size_t	lsrc;
	size_t	ldst;

	ldst = sizeof(dst);
	lsrc = ft_strlen(src);
	total = lsrc + ldst;
	i = 0;
	if (ldst < size - 1 && size)
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
#include <string.h>

int		main()
{
	char	*dest;

	alarm(5);
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	//printf("%s\n", dest);
		printf("%zu",ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
}