/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:12:51 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/19 23:50:03 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	k;
	size_t	c;

	c = 0;
	if (!s)
		return (NULL);
	k = ft_strlen(s);
	if (start >= k)
		len = 0;
	else if (k <= (len + start))
		len = k - start;
	sub = malloc(len + 1);
	if (sub == 0)
		return (0);
	while (s[start] && c < len)
	{
		sub[c] = s[start];
		start++;
		c++;
	}
	sub[c] = '\0';
	return (sub);
}

/* int main()
{
			const size_t	size = 10;
			char	str[10] = ""i just want this part #############"";

			//strcpy(str, "YOLO !!!!");
			printf("asdsada\n");
			printf("%s\n",ft_substr(str, 6, size) + 3);
} */