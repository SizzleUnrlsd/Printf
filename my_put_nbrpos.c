/*
** EPITECH PROJECT, 2022
** my_put_nbrpos
** File description:
** ifcond
*/
#include "my.h"

int my_put_nbrpos(unsigned int nb)
{
    int max = 1;

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
