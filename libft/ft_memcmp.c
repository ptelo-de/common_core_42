       #include <stddef.h>
       int ft_memcmp(const void *s1, const void *s2, size_t n)
       {
            char *s3;
            char *s4;
            size_t i;

            s3 = (char *)s1;
            s4 = (char *)s2;
            i = 0;
            n--;
            while (s3[i] == s4[i] && i < n)
                i++;
            return (s3[i] - s4[i]);
       }