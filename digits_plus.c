/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** digits_plus
*/
#include "my.h"
#include <stdarg.h>

void digits_plus(va_list str)
{
    my_put_nbr_plus(va_arg(str, int));
    return;
}
