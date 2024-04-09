#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
    char *ptr = (char *)s;
    size_t i = 0;

    while (i < n && ptr[i])
    {
        ptr[i] = c;
        i++;
    }
    return (s);
}