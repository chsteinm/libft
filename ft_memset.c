void    *ft_memset(char *str, int c, int size)
{
    int i;

    i = -1;
    while (++i <= size)
        str[i] = c;
    return (str);
}