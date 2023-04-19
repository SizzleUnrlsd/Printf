/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-hugo.carolin
** File description:
** hashtag_X
*/
#include "my.h"
#include <stdarg.h>

void hashtag_upper_x(va_list str)
{
    char *base = "0123456789ABCDEF";
    flag_upper_p(va_arg(str, char*), base);
    return;
}
