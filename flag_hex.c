/*
** EPITECH PROJECT, 2022
** hexadecimal_min
** File description:
** ifcond
*/
#include <stdarg.h>
#include "my.h"

void hexadecimal_min(va_list str)
{
    char *base = "0123456789abcdef";
    hexa_min(va_arg(str, int), base);
    return;
}
