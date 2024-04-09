#include <stddef.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t	i;
	char *s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
    if (s < d)
    {
		n--;
		while (i <= n)
		{
			*(d + n - i) = *(s + n - i);
			i++;
		}

	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}