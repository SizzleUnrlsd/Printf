/*
** EPITECH PROJECT, 2022
** bin
** File description:
** ifcond
*/
#include "my.h"
#include <stdarg.h>

void bin(va_list str)
{
    my_put_nbr_bin(va_arg(str, int));
    return;
}
