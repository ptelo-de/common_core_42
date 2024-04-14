/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:10:51 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/14 10:40:02 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*big;
	char	*little;
	size_t	c;
	size_t	i;

	big = (char *)haystack;
	little = (char *)needle;
	i = 0;
	while (big[i] && i < (len - 1) && len > 0)
	{
		c = 0;
		while (big[i + c] && little[c] && i + c < (len - 1) && big[i
				+ c] == little[c])
			c++;
		if (c == ft_strlen(little))
			return (big + i);
		i++;
	}
	return (0);
}
/* int main(void)
{
	char *str;
	str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
			printf("fodime%s\n",str);
} */