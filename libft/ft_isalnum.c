int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || ('0' >= c && '9' <= c))
        return (1);
    return (0);
}