/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:05:12 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/09 21:05:13 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	char	c;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	c = '\n';
	write(fd, &c, 1);
}
int	main(void)
{
	ft_putendl_fd("dime sofia", 1);
}