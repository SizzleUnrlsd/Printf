/*
** EPITECH PROJECT, 2022
** float
** File description:
** ifcond
*/
#include <stdarg.h>
#include "my.h"

void float_f(va_list str)
{
    flagf(va_arg(str, double));
    return;
}
