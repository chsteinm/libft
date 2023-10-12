char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = -1;
    while (s[++i] != '\0');
    while ((char)c != s[i])
        if (i-- - 1 == -1)
            return (0);
    return ((char *)&s[i]);
}