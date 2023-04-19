/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** space_simple_f
*/
#include "my.h"
#include <stdarg.h>
#include <stdio.h>

void space_simple_f(va_list str)
{
    my_putchar(' ');
    flagf(va_arg(str, double));
    return;
}
