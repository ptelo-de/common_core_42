#include <unistd.h>
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd)
{
    long j;

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        j = -n;
    }
    else
        j = n;
    if (j <= 9)
        ft_putchar_fd(j + 48,fd);
    else
    {
        ft_putnbr_fd(j/10, fd);
        ft_putnbr_fd(j%10, fd);
    }
}