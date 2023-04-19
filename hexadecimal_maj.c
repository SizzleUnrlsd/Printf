/*
** EPITECH PROJECT, 2022
** hexadecimal_maj
** File description:
** ifcond
*/
#include <stdarg.h>
#include "my.h"

void hexadecimal_maj(va_list str)
{
    char *base = "0123456789ABCDEF";
    hexa_maj(va_arg(str, int), base);
    return;
}
