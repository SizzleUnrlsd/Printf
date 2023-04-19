/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** space_simple_flag
*/
#include "my.h"
#include <stdarg.h>

void space_simple_d_i(va_list str)
{
    my_putchar(' ');
    my_put_nbr(va_arg(str, int));
    return;
}
