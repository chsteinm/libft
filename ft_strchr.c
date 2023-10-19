char    *ft_strchr(const char *str, int c)
{
    char    *s;

    s = (char *)str;
    while ((char)c != *s)
        if (*s++ == 0 && c != 0)
            return (0);
    return (s);
}