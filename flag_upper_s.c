/*
** EPITECH PROJECT, 2022
** flag_upper_s
** File description:
** ifcond
*/
#include "my.h"

int flag_upper_s(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <= 126) {
            my_putchar(str[i]);
        } else {
            my_put_octal(str[i]);
        }
        i = i + 1;
    }
    return 0;
}
