/*
** EPITECH PROJECT, 2022
** nbrpos
** File description:
** ifcond
*/
#include <stdarg.h>
#include "my.h"

void nbrpos(va_list str)
{
    my_put_nbrpos(va_arg(str, int));
    return;
}
