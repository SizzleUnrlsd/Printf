/*
** EPITECH PROJECT, 2022
** upper_s
** File description:
** ifcond
*/
#include "my.h"
#include <stdarg.h>

void upper_s(va_list str)
{
    flag_upper_s(va_arg(str, char*));
    return;
}
