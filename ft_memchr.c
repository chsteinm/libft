#include "libft.h"

void    *ft_memchr(const void *src, int c, int n)
{
    unsigned char    *s;

    s = (unsigned char *)src;
    while (n--)
        if ((unsigned char)c == *s++)
            return ((void *)s - 1);
    return (NULL);
}