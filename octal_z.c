/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-hugo.carolin
** File description:
** octal_z
*/
#include "my.h"
#include <stdarg.h>

void octal_z(va_list str)
{
    my_putchar('0');
    my_put_octal(va_arg(str, int));
    return;
}
