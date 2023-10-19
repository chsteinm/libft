int ft_memcmp(const void *str1, const void *str2, int n)
{
    char    *s1;
    char    *s2;

    s1 = (char *)str1;
    s2 = (char *)str2;
    while (n-- && *s1++ == *s2++);
    return (*(--s1) - *(--s2));
}