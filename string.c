/*
** EPITECH PROJECT, 2022
** string
** File description:
** ifcond
*/
#include "my.h"
#include <stdarg.h>

void string(va_list str)
{
    my_putstr(va_arg(str, char*));
    return;
}
