#include <stdlib.h>
size_t ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2)
{
    char *join;
    size_t i;
    size_t j;

    join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (join == 0)
        return (0);
    i = 0;
    while (s1[i])
    {
        join[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        join[i + j] = s2[j];
        j++;
    }
    join[i + j] = 0;
    return (join);
}