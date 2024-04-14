/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:22:40 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/14 11:44:18 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countchr(int n)
{
	size_t	rl;
	int		j;

	rl = 0;
	j = n;
	if (!j)
		return (1);
	while (j)
	{
		rl++;
		j = j / 10;
	}
	if (n < 0)
		rl++;
	return (rl);
}

char	*ft_itoa(int n)
{
	char	*r;
	size_t	rl;
	size_t	i;

	rl = ft_countchr(n);
	i = 0;
	if (n == -2147483648)
		return ("-2147483648");
	r = (char *)ft_calloc(rl + 1, 1);
	if (n < 0)
	{
		r[i] = '-';
		i++;
		n = -n;
	}
	rl--;
	while (rl > i)
	{
		r[rl] = (48 + n % 10);
		rl--;
		n /= 10;
	}
	r[i] = 48 + n % 10;
	return (r);
}
