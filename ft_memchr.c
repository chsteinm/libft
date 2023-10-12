void    *ft_memchr(const void *src, int c, int n)
{
    char *s;

    s = (char *)src;
    while ((char)c != *s++)
        if ((*s == 0 && c != 0) || n-- == 0)
            return (0);
    return ((void *)s);
}