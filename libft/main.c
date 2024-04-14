typedef struct s_nome
{
	char c;
	char *name;
	struct s_nome *next;
}   t_nome;

#include <stdio.h>
#include <stdlib.h>

t_nome *list_new(char c)
{
	t_nome *new;

	new = malloc(sizeof(t_nome));
	if (!new)
		return (NULL);
	new->c;//(*new).c
	return new;
}

int main()
{
 	// t_nome array[10];
	char *str = "hello";
	t_nome *list;

	list = list_new('h');
	printf("%p\n", str);//endereco de memooria que o pointer aponta
	printf("%c\n", *str);// o que guardamos nesse endereco de memoria
	str++;
	printf("%p\n", str);
	printf("%c\n", *str); 

}