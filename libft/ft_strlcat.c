#include <stddef.h>
#include <stdio.h>
static size_t ft_strlen(const char *s);
static size_t ft_strlen(const char *s)
{
    size_t  i;
    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t total;
    size_t i;
    size_t lsrc;
    size_t ldst;
    ldst = ft_strlen(dst);
    lsrc = ft_strlen(src);
    total = lsrc + ldst;
    i = 0;
    if (ldst < size - 1)
    {
        while (i < (size - ldst -1) && src[i])
        {
            dst[ldst + i] = src[i];
            i++;
        }
        dst[ldst + i] = '\0';
        return (total);
    }
    else
        return (size + lsrc);
}