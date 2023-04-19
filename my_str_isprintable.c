/*
** EPITECH PROJECT, 2022
** my_is_printable
** File description:
** printable character
*/
#include "my.h"
#include <stddef.h>

int my_str_isprintable(char c)
{
    if (c == '\0')
        return 84;
    if (c == 10)
        my_putchar('\n');
    if (c >= 32 && c <= 126) {
        my_putchar(c);
    } else {
        return 84;
    }
    return 0;
}
