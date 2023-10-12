int ft_strncmp(const char *s1, const char *s2, int n)
{
    while (--n && *s1 == *s2 && *s1)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}