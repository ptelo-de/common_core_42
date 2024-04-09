/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:06:00 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/09 21:06:01 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_itoa(int n)
{
	int j = n;
	char *r;
	size_t rl = 0;
	size_t i = 0;
	if (n == -2147483648)
		return ("-2147483648");
	while (j)
	{
		rl++;
		j = j / 10;
	}
	if (n < 0)
	{
		rl++;
		j = -n;
	}
	else
		j = n;
	r = (char *)ft_calloc(rl + 1, 1);
	if (n < 0)
	{
		r[i] = '-';
		i++;
	}
	rl--;
	while (rl > i)
	{
		r[rl] = (48 + j % 10);
		rl--;
		j /= 10;
	}
	r[i] = 48 + j % 10;
	return (r);
}