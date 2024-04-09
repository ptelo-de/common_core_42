#include<stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;

    if (size == 0)
        return (size);
    i = 0;
    while (i < (size - 1) && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (size);
}