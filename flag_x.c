/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-hugo.carolin
** File description:
** flag_x
*/
#include <stdarg.h>
#include "my.h"

int hexa_min(unsigned int nb, char const *base)
{
    unsigned int a = 1;
    unsigned int len_base = my_strlen(base);

    while ((nb / a) >= len_base) {
        a = a * len_base;
    }
    while (a > 0) {
        my_putchar(base[(nb / a) % len_base]);
        a = a / len_base;
    }
    return 0;
}
