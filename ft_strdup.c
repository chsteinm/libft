#include "libft.h"

char    *ft_strdup(char *src)
{
    int     len;
    int     i;
    char    *copy;
    
    len = ft_strlen(src);
    copy = malloc(sizeof(char) * (len + 1));
    if (copy == NULL)
        return (NULL);
    i = -1;
    while (src[++i])
        copy[i] = src[i];
    return (copy);
}