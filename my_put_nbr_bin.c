/*
** EPITECH PROJECT, 2022
** my_put_nbr_bin
** File description:
** display binary
*/
#include <unistd.h>
#include "my.h"

char my_putchar(char c);

int my_put_nbr_bin(int nb)
{
    int max = 1;

    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    while (nb / max >= 2) {
        max = max * 2;
    }
    while (max != 0) {
        my_putchar((nb / max + 48));
        nb = nb % max;
        max = max / 2;
    }
    return 0;
}
