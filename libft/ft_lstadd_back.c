/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptelo-de <ptelo-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:44:37 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/04/19 20:56:43 by ptelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    if(!lst || !new)
        return ;
    if(*lst == NULL)
    {
        *lst = new;
        return ;
    }
    last = ft_lstlast(*lst);
    last->next = new;
    
}
/* int main()
{
    t_list  *lst;
    
    //lst = ft_lstnew("teste");
    lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew("new"));
    printf("bbbb");
    //printf("%s\n", (char *)lst->content);
   // printf("%s\n", (char *)lst->next->content);
} */