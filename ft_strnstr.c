char    *ft_strnstr(const char *haystack, const char *needle, int len)
{
    int  i;
    int  j;

    i = 0;
    if (needle[i] == '\0')
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
        {
            if (needle[j + 1] == '\0')
                return ((char *)&haystack[i]);
            j++;
        }
        i++;
    }
    return (0);
}
