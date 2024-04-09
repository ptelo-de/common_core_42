int ft_isprint(int c)
{
    if (31 < c && 127 > c)
        return (1);
    return (0);
}