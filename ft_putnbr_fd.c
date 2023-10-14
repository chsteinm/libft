#include "libft.h"

static void rec(unsigned int nb, int fd)
{
    if (nb > 9)
        rec(nb / 10, fd);
    ft_putchar_fd(nb % 10 + 48, fd);
}

void    ft_putnbr_fd(int n, int fd)
{

    unsigned int    nb;

    if (n < 0)
    {
        write(fd, "-", 1);
        nb = -n;
    }
    else
        nb = n;
    rec(nb, fd);
}