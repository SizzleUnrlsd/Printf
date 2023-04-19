/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** display all possible of an int
*/
#include <unistd.h>
#include "my.h"
#include <limits.h>

char my_putchar(char c);

int min(long nb)
{
    if (nb == LONG_MIN)
        my_put_nbr(nb);
    return 0;
}

int my_put_nbr(long nb)
{
    min(nb);
    long max = 1;

    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
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
