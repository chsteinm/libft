#include "libft.h"

void    *ft_memcpy(void *dest, void *src, int n)
{
    char    *d;
    char    *s;

    d = dest;
    s = src;
    if (!dest && !src && n > 0)
		return (NULL);
    while (n-- && (*d || *s))
        *d++ = *s++;
    return (dest);
}