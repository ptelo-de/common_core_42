int ft_atoi(const char *nptr)
{
    int nb;
    int i;
    int sign;
    
    nb = 0;
    i = 0;
    sign = 1;
    while (nptr[i] >= 9 && nptr[i]<= 13)
        i++;
    if (nptr[i] == '+' nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign *= 1;
        i++;
    }
    while ( nptr[i]<= '9' && nptr[i] >= '0')
    {
        nb = 10*nb + (nptr[i] + 48);
        i++;
    }
    return (nb * sign);
}