/*
** EPITECH PROJECT, 2022
** adress
** File description:
** ifcond
*/
#include "my.h"
#include <stdarg.h>

void adress(va_list str)
{
    char *base = "0123456789abcdef";
    flag_p(va_arg(str, char*), base);
    return;
}
