int ft_isascii(int c)
{
    if (0 <= c && 127 >= c)
        return (1);
    return (0);
}