#include <stddef.h>
size_t ft_strlen(const char *s);

char *ft_strrchr(const char *s, int c)
{
    int l;
    
    l = ft_strlen(s);
    l--;
    while(i >= 0)
    {
        if (s[i] == c)
            return(s + i);
        i--;
    }
    return (0);


}