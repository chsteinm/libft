#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *str;

    while (*s && start--)
        s++;
    i = -1;
    while (s[++i] && i < len);
    str = malloc(sizeof(char) * ++i);
    if (!str)
        return (NULL);
    len = i;
    i = -1;
    while (++i < len - 1)
        str[i] = *s++;
    str[i] = 0;
    return (str);
}