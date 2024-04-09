#include <stddef.h>
#include <unistd.h>
void ft_putendl_fd(char *s, int fd)
{
    size_t i;
    char c;
    
    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    c = '\n';
    write(fd, &c, 1);
}
int main()
{
    ft_putendl_fd("dime sofia", 1);
}