#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strndup(const char *s, size_t n)
{
    size_t i;
    char *d;

    i = 0;
    d = (char *)malloc(n + 1);
    if (!d)
        return (NULL);
    while (s[i] && i < n)
    {
        d[i] = s[i];
        i++;
    }
    d[i] = 0;
    return (d);
}
static size_t ft_count_words(char const *s, char c);
static size_t ft_count_words(char const *s, char c)
{
    size_t occ;
    size_t i;

    i = 0;
    occ = 0;
    
    while (s[i])
    {
        if (i == 0 && s[i] != c)
           occ++;
    
        else if ((s[i] == c && i != 0 && s[i - 1]!= c) 
        ||(s[i] !=c && s[i + 1] == 0))
            occ++;
        i++;
    }
    return occ;
}
char **ft_split(char const *s, char c)
{
    size_t rl = ft_count_words(s, c);
    char **r = malloc(8 * (rl + 1));
    size_t i = 0;
    size_t j;
    size_t k = 0;
    if (r == 0)
        return (0);
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i -1] ==c))
        {
            j = 0;
            while (s[i + j] && s[i + j] != c)
                j++;
            r[k] = ft_strndup(s + i, j);

            if (k == 1)
            {
                r[k]= NULL;
            }

             if (r[k] == NULL) // Check if ft_strndup failed
            {
                // Free previously allocated memory and return NULL
                while (k > 0)
                    free(r[--k]);
                free(r);
                return NULL;
            }
            k++;
            i += j;
        }
        i++;
    }
    r[k] = 0;
    i = 0;


    
    /*while(i < k)
    {
        //tirar isto
        if (i == 1)
        {
            r[i]= NULL;
        }

        if (r[i] == 0)
        {
            j = i;
            while(0 < j)
            {
                free(r[j - 1]);
                j--;
            }
            free(r);
            return (0);
        }
        i++;
    }*/
    return (r);
}
int main()
{
     //char *s = "";
    char *s1 = "hellohellaah";
    char c = 'h';
    char **re;
    int i = 0;
    re = ft_split(s1, c);
    if(re)
    {
        while(re[i])
        {
            printf("%s\n",re[i]);
            i++;
        }
    }

}