/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_put_nbr_plus
*/
#include <unistd.h>
#include "my.h"
#include <limits.h>

char my_putchar(char c);

int min_plus(long nb)
{
    if (nb == LONG_MIN)
        my_put_nbr_plus(nb);
    return 0;
}

int nbr_negative(long nb, long max)
{
    nb = nb * (-1);
    my_putchar('-');
    while (nb / max >= 10) {
        max = max * 10;
    }
    while (max != 0) {
        my_putchar((nb / max + 48));
        nb = nb % max;
        max /= 10;
    }
    return 0;
}

int my_put_nbr_plus(long nb)
{
    min_plus(nb);
    long max = 1;
    (nb == 0 ? my_putchar('+'), my_putchar('0') : 0);
    if (nb > 0) {
        my_putchar('+');
        while (nb / max >= 10) {
            max = max * 10;
        }
        while (max != 0) {
            my_putchar((nb / max + 48));
            nb = nb % max;
            max /= 10;
        }
    }
    if (nb < 0)
        nbr_negative(nb, max);
    return 0;
}
