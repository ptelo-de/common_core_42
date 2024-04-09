#include <stddef.h>
#include <stdlib.h>
 
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

 void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = malloc(nmemb * size);
    if (ptr == 0)
        return (0);
    ft_bzero(ptr, nmemb);
    return (ptr);
    
}