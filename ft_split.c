#include "libft.h"

static int  count_words(char const *s, char c)
{
    int n;

    n = 0;
    while (*s)
    {
        if (*s != c)
        {
            n++;
            while (*s && *s != c)
                s++;
        }
        else
            s++;
    }
    return (n);
}

char    **ft_split(char const *s, char c)
{
    int     w;
    int     j;
    int     len;
    char    **strs;

    w = count_words(s, c);
    strs = malloc(sizeof(char *) * (w + 1));
    if (!strs)
        return (NULL);
    strs[w] = 0;
    j = -1;
    while (++j < w)
    {
        while (*s == c)
            s++;
        len = -1;
        while (s[++len] != c && s[len]);
        strs[j] = malloc(sizeof(char) * ++len);
        if (!strs[j])
            return (NULL);
        ft_strlcpy(strs[j], s, len);
        s += len;
    }
    return (strs);
}