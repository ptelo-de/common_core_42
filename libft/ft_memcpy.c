#include<stddef.h>
 void *ft_memcpy(void *dest, const void *src, size_t n)
 {
    char *s;
    char *d;
    size_t i;
    s = (char *)src;
    d = (char *)dest;
    i = 0;
    while (i < n && d >= s)
    {
    	d[i] = s[i];
		  i++;
    }
	return (dest);
 }