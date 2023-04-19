/*
** EPITECH PROJECT, 2022
** digits
** File description:
** ifcond
*/
#include "my.h"
#include <stdarg.h>

void digits(va_list str)
{
    my_put_nbr(va_arg(str, int));
    return;
}
