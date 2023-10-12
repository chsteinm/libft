#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int check_l_overflow(int sign, char *str)
{
    int i;

    i = 0;
    printf("%d\n", ft_strncmp("9223372036854775807", str, 19));
    printf("%d\n", strncmp("9223372036854775807", str, 19));
    while (str[i] >= '0' && str[i] <= '9')
        i++;
    if (i >= 19 && sign == 1)
        return (ft_strncmp("9223372036854775807", str, 19));
    else if (i >= 19)
        return (ft_strncmp("9223372036854775808", str, 19));
    return (0);
}

int ft_atoi(char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '+')
        str++;
    else if (*str == '-')
    {
        str++;
        sign = -1;
    }
    if (check_l_overflow(sign, str) < 0)
    {
        if (sign == 1)
            return (-1);
        return (0);
    }    
    while (*str >= '0' && *str <= '9')
        res = res * 10 + *str++ - 48;
    return (res * sign);
}

// int main(int ac, char **av){
//     printf("%d\n", atoi(av[1]));
//     printf("%d\n", ft_atoi(av[1]));
// }