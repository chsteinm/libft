void    *ft_memmove(void *dest, void *src, int n)
{
    unsigned char    *d;
    unsigned char    *s;

    d = dest;
    s = src;
    if (d < s)
        while (n--)
            *d++ = *s++;
    else if (d > s)
    {
        d += n;
        s += n;
        while (n--)
            *(--d) = *(--s);
    }
    return (dest);
}