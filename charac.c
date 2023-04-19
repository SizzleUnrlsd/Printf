/*
** EPITECH PROJECT, 2022
** charac
** File description:
** ifcond
*/
#include "my.h"
#include <stdarg.h>

void charac(va_list str)
{
    my_putchar(va_arg(str, int));
    return;
}
