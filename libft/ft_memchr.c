#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    char *s1;
    size_t i;

    s1 = (char *)s;
    i = 0;
    n--;
    while(i < n)
    {
        if (s1[i] == c)
            return (s1 + i - 1);
        i++;
    }
    return (NULL);
}