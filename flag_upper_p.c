/*
** EPITECH PROJECT, 2022
** flag_p
** File description:
** flag_p
*/
#include "my.h"

char *flag_upper_p(void const *p, char const *base)
{
    long a = 1;
    unsigned long len_base = my_strlen(base);
    unsigned long u = (unsigned long)p;

    my_putstr("0X");
    while ((u / a) >= len_base) {
        a = a * len_base;
    }
    while (a > 0) {
        my_putchar(base[(u / a) % len_base]);
        a = a / len_base;
    }
    return (0);
}
