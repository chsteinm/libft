#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(int ac, char **av)
{
    int c = -2;
    while (c++ < 300)
    {
        printf("%d : \n", c);
        printf("ft isalpha = %d ; ", ft_isalpha(c));
        printf("isalpha = %d\n", isalpha(c));
        printf("ft isdigit = %d ; ", ft_isdigit(c));
        printf("isdigit = %d\n", isdigit(c));
        printf("ft isascii = %d ; ", ft_isascii(c));
        printf("isascii = %d\n", isascii(c));
        printf("\n");
    }
    // printf("ft isalpha = %d\n", ft_isalpha(av[ac - 1][0]));
    // printf("ft isalpha = %d\n", ft_isalpha(av[ac - 1][1]));
    // printf("isalpha = %d\n", isalpha(av[ac - 1][0]));
    // printf("isalpha = %d\n", isalpha(av[ac - 1][1]));
    // printf("ft isdigit = %d\n", ft_isdigit(av[ac - 1][0]));
    // printf("ft isdigit = %d\n", ft_isdigit(av[ac - 1][1]));
    // printf("isdigit = %d\n", isdigit(av[ac - 1][0]));
    // printf("isdigit = %d\n", isdigit(av[ac - 1][1]));
    // printf("ft isalnum = %d\n", ft_isalnum(av[ac - 1][0]));
    // printf("ft isalnum = %d\n", ft_isalnum(av[ac - 1][1]));
    // printf("isalnum = %d\n", isalnum(av[ac - 1][0]));
    // printf("isalnum = %d\n", isalnum(av[ac - 1][1]));
    // printf("ft isascii = %d\n", ft_isascii(av[ac - 1][0]));
    // printf("ft isascii = %d\n", ft_isascii(av[ac - 1][1]));
    // printf("isascii = %d\n", isascii(av[ac - 1][0]));
    // printf("isascii = %d\n", isascii(av[ac - 1][1]));
    // printf("ft strlen = %d\n", ft_strlen(av[ac - 1]));
    // printf("strlen = %lu\n", strlen(av[ac - 1]));
    // int size;
    // char c;
    // char *str;
    // printf("Entre une taille et un caractère : ");
    // while (scanf("%d %c", &size, &c) == 2)
    // {
    //     str = malloc(size + 1);
    //     printf("ft memset size %d full of %c = %s\n", size, c, ft_memset(str, c, size));
    //     printf("of memset size %d full of %c = %s\n", size, c, memset(str, c, size));
    //     // printf("of memset size 10 full of %c = %s\n", c, memset(str, c, 10));
    //     // printf("ft memset size 10 full of %c = %s\n", c, ft_memset(str, c, 10));
    //     free(str);
    //     printf("Refais ou tape pas un entier pour passer à la suite : ");
    // }
    // while ((c = getchar()) != '\n' && c != EOF);
    // char str10[10];
    // ft_bzero(str10, 10);
    // memcpy(str10, av[1], 1);
    // printf("memcpy : \n%s\n", str10);
    // memcpy(str10, av[1], 5);
    // printf("%s\n", str10);
    // ft_bzero(str10, 10);
    // ft_memcpy(str10, av[1], 1);
    // printf("ft_memcpy :\n%s\n", str10);
    // ft_memcpy(str10, av[1], 5);
    // printf("%s\n", str10);
    // char *dix = str10 + 2;
    // ft_memmove(dix, av[1], 5);
    // printf("ft memmove : \n%s\n", str10);
    // char test[] = "kikOoo";
    // printf("strlcpy : \n%lu = %s\n", strlcpy(dix, test, 1), str10);
    // char tast[10];
    // ft_memcpy(tast, str10, 3);
    // printf("ft memmove : \n%s\n", tast);
    // ft_strlcat(tast, test, 10);
    // strlcat(str10, test, 10);
    // printf("ft strlcat : \n%s\n", tast);
    // printf("strlcat : \n%s\n", str10);
    // str10[0] = toupper(str10[0]);
    // tast[0] = ft_toupper(tast[0]);
    // printf("toupper : \n%s\n", str10);
    // printf("ft toupper : \n%s\n", tast);
    // str10[0] = tolower(str10[0]);
    // tast[0] = ft_tolower(tast[0]);
    // printf("tolower : \n%s\n", str10);
    // printf("ft tolower : \n%s\n", tast);
    // char    *strr;
    // strr = ft_substr(tast, 0, 3);
    // printf("%s\n", strr);
    // char **strs = ft_split(av[1], ' ');
    // for (int i = 0; strs[i]; i++)
    //     printf("%s\n", strs[i]);
    return (0);
}