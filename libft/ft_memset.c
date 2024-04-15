/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:05:29 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/15 12:37:46 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

/* #include <string.h>
int main()
{
	char *b1 = (char*)malloc(sizeof(char) * (0xF0000 + 1));
	char *b2 = (char*)malloc(sizeof(char) * (0xF0000 + 1));

	*b1 = 0;
	*b2 = 0;
	memset(b1, '\5', 0xF0000);
	ft_memset(b2, '\5', 0xF0000);
	if (!memcmp(b1, b2, 0xF0000))
	{
		printf("%s\n", b2);
		free(b1);
		free(b2);
		printf("test ok");
		return 0;
	}
	printf("test failed");
	free(b1);
	free(b2);
} */