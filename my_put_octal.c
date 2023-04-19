/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-hugo.carolin
** File description:
** flag_o
*/
#include <stdio.h>
#include "my.h"

int my_put_octal(unsigned int nb)
{
    unsigned int a = 1;

    while ((nb / a) >= 8) {
        a = a * 8;
    }
    while (a > 0) {
        my_putchar((nb / a) % 8+ '0');
        a = a / 8;
    }
    return (0);
}
