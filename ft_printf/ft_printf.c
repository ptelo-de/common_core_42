#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
    return (1);
}

int    ft_print_s(const char *str)
{
    int i;

    i = 0;
    if (str == NULL)
        return (ft_print_s("(null)"));
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}

void    ft_print_aux_d(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_print_aux_d(nb / 10);
        ft_print_aux_d(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}
int   ft_print_d(int nb)
{
    int i;
    i = 0;
    ft_print_aux_d(nb);
    if (nb < 0)
        i++;
    while (nb)
    {
        i++;
        nb /= 10;
    }
    return(i);
}
void ft_print_aux_u(unsigned int nb)
{
    if (nb > 9)
    {
        ft_print_aux_u(nb / 10);
        ft_print_aux_u(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}

int ft_print_u(unsigned int nb)
{
    int i;

    i = 0;

    ft_print_aux_u(nb);
    while (nb != 0)
    {
        i++;
        nb /= 10;
    }
    return(i);
}

void ft_print_aux_x(unsigned long nb, const char *arr)
{
    if (nb > 15)
    {
        ft_print_aux_x(nb / 16, arr);
        ft_print_aux_x(nb % 16, arr);
    }
    else
        ft_putchar(arr[nb]);
}
int ft_print_p(unsigned long nb, const char *arr)
{
    int i;
    if (nb == 0)
        return (ft_print_s("(nil)"));
    i = ft_print_s("0x");
    ft_print_aux_x(nb, arr);
    while (nb)
    {
        i++;
        nb /= 16;
    }
    return(i);
}
int ft_print_x(unsigned long nb, const char *arr)
{
    int i;

    i = 0;
    ft_print_aux_x(nb, arr);
    while (nb)
    {
        i++;
        nb /= 16;
    }
    return(i);
}
int ft_printf(const char *str, ...)
{
    int i;
    int r;
    va_list args;
    va_start(args, str);

    i = 0;
    r = 0;
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1])
        {
            i++;
            if (str[i] == 'c')
                r += ft_putchar(va_arg(args, int));
            else if (str[i] == 's')
                r += ft_print_s(va_arg(args, const char *));
            else if (str[i] == 'p')
                r += ft_print_p(va_arg(args, unsigned long), "0123456789abcdef");
            else if (str[i] == 'd' || str[i] == 'i')
                r += ft_print_d(va_arg(args, int));
            else if (str[i] == 'u')
                r += ft_print_u(va_arg(args, unsigned int));
            else if (str[i] == 'x')
                r +=ft_print_x(va_arg(args, unsigned long), "0123456789abcdef");
            else if (str[i] == 'X')
               r += ft_print_x(va_arg(args, unsigned long), "0123456789ABCDEF");
            else if (str[i] == '%')
                r += ft_putchar('%');
        }
        else if (str[i] == '%')
                return (-1);
            else
                r += ft_putchar(str[i]);

        i++;
    }
    va_end(args);

        return (r);
}
/*
#include <stdio.h>
int main() {
    FILE *fp;
    int c;
   
    // open the current input file
    fp = fopen(__FILE__,"r");

    do {
         c = getc(fp);   // read character 
         putchar(c);     // display character
    }
    while(c != EOF);  // loop until the end of file is reached
    
    fclose(fp);
    return 0;
}
*/
