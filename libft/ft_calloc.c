 #include <stddef.h>
 #include <stdlib.h>
 void ft_bzero(void *s, size_t n);
 void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = malloc(nmemb * size);
    if (ptr == 0)
        return (0);
    ft_bzero(ptr, nmemb);
    return (ptr);
    
}
//not tested