/*
** EPITECH PROJECT, 2022
** printable
** File description:
** printable characters
*/
#include "my.h"
#include <stdarg.h>

void printable(va_list str)
{
    my_str_isprintable(va_arg(str, int));
    return;
}
