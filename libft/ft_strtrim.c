#include <stddef.h>
#include <stdlib.h>
size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
char *ft_strtrim(char const *s1, char const *set)
{
    char *r;
    size_t start;
    size_t end;
    if (s1 == 0 || !(set))
        return(0);
    start = 0;
    while (ft_strchr(set,s1[start]))
        start++;
    end = ft_strlen(s1) - 1;
    while (end > start && ft_strchr(set, s1[end]))
        end--;
    r = malloc(end - start + 1);
    if (r == 0)
        return (0);
    ft_strlcpy(r, s1 + start, end - start + 1 );
    return (r);
}