#include <stddef.h>
#include <stdlib.h>

char *ft_strndup(const char *s, size_t n)
{
    size_t i;
    char *d;

    i = 0;
    d = (char *)malloc(n + 1);
    if (d == 0)
        return (0);
    while (s[i] && i < n)
    {
        d[i] = s[i];
        i++;
    }
    d[i] = 0;
    return (d);
}