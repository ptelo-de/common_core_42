/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:07:15 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/20 21:56:18 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*swap;
	void	*c;

	swap = lst;
	result = NULL;
	while (lst)
	{
		c = f(swap->content);
		swap = ft_lstnew(c);
		if (!swap)
		{
			del(c);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, swap);
		lst = lst->next;
	}
	return (result);
}
