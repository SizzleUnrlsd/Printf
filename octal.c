/*
** EPITECH PROJECT, 2022
** octal
** File description:
** ifcond
*/
#include "my.h"
#include <stdarg.h>

void octal(va_list str)
{
    my_put_octal(va_arg(str, int));
    return;
}
