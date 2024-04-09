#include <stdio.h>
int ft_isalpha(int c);
int ft_isdigit(int c);
//int ft_isalnum(int c);
//int ft_isascii(int c);
//int ft_isprint(int c);
//size_t ft_strlen(const char *s);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
#include<stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strndup(const char *s, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_itoa(int n);

int main()
{   
    /*printf("%zu\n", ft_strlen("ola"));
    char s[] = "ol";
    char d[] = "HELLO";
    //ft_bzero(s, 2);
    //char *test = (char *)ft_memcpy(d,s, 17);
    //printf("%s\n", s+2);
    //printf("depois do ft_memcpy:%s\n", test);

    //testing ft_memmove
    char *t_move = (char *)ft_memmove(s,d,4);
    printf("depois do ft_memmove:%s\n", t_move);

    //testing ft_strlcpy
    char *src = "copied text";
    char dest[20];
    size_t t_lcpy = ft_strlcpy(dest, src, 20);
    printf("t_lcpy: %zu\n", t_lcpy);
    printf("after ft_strlcpy: %s\n", dest);
    
char dest[10] = "Hello";
char src[] = " World";
size_t re = ft_strlcat(dest, src, 3);

char dest[5] = "Test";
char src[] = "12345";
ft_strlcat(dest, src, sizeof(dest));
printf("dest pos strlcat:%s\nreturn: %zu\n", dest, re);

//testing ft_strncmp
char *s1 = "ola2";
char *s2 = "ola1";
printf("ft_strncmp : %d\n s1[5]: %c\n s2[5]: ", ft_strncmp(s1, s2, 5), s1[5]+1);

char *s = "abcd";
char *s1 = (char *)ft_memchr(s, 'c', 4);
printf("ft_memchr: %s\n", s1);

char *s3 = "hello world, how are you?";
char *s4 = "world";
char *test4 = ft_strnstr(s3, s4, 4);
printf("st_strnstr: %s\n", test4);

printf("%zu", sizeof(char));
//testing ft_str_dup
char *s = "alosoueu";
char *d = ft_strndup(s, 8);
printf("ft_strndup: %s\n", d);

//testing ft_substr
printf("ft_substr: %s\n", ft_substr("0123456", 1, 5));
//testing ft_strjoin
printf("ft_strjoin: %s\n", ft_strjoin("hola", ", que tal?"));

//testing ft_strtrim
char *s1 = "lalalal";
char *set = 0;
printf("ft_strtrim: %s\nsizeof char*: %zu\n ", ft_strtrim(s1, set), sizeof(char *));
*/
//testin ft_itoa
printf("%s\n", ft_itoa(-2147483648));
}