void    *ft_memcpy(void *dest, void *src, int n)
{
    char    *d;
    char    *s;

    d = dest;
    s = src;
    while (n--)
        *d++ = *s++;
    return (dest);
}