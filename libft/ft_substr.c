/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:12:51 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/22 21:38:53 by ptelo-de         ###   ########.fr       */
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
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (s[start] && c < len)
	{
		sub[c] = s[start];
		start++;
		c++;
	}
	sub[c] = '\0';
	return (sub);
}
/* 
int main()
{
			const size_t	size = 2;
			char	str[] = "St ge da pa cm ct ws!\0";

			//strcpy(str, "YOLO !!!!");
			printf("%s\n",ft_substr(str, 0, size));
} */