
#include "libft.h"

void ft_teste(void *c)
{
	ft_putendl_fd(c, 1);
}
void	ft_del(void *c)
{
	ft_bzero(c, sizeof(char*));
	free(c);
}
int main(int argc, char **argv)
{
	t_list *node1 = ft_lstnew(ft_strdup("goncalo"));
	t_list *node2 = ft_lstnew(ft_strdup("pedro"));
	t_list *node3 = ft_lstnew(ft_strdup("pilar"));
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstiter(node1,ft_teste);
	ft_lstclear(&node1,ft_del);
}
