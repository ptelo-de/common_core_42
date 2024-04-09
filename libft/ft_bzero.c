#include <stddef.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    char *ptr;
    size_t i;
    
    ptr = (char *)s;
    i = 0;
    while(n > i)
    {
        ptr[i] = 0;
        i++;
    }
}

