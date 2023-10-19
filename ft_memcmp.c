int ft_memcmp(const void *str1, const void *str2, int n)
{
    unsigned char    *s1;
    unsigned char    *s2;

    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    if (n == 0)
		return (0);
    while (--n && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// int main(int ac, char **av)
// {
//     printf("ft_memcmp : %d ; ", ft_memcmp(av[1], av[ac-1], 3));
//     printf("memcmp : %d\n", memcmp(av[1], av[ac-1], 3));
// }