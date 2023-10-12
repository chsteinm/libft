void    *ft_bzero(void *str, int size)
{
    char    *s;

    s = (char *)str;
    while (size--)
        *s++ = 0;
    return (str);
}