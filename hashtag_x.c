/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-hugo.carolin
** File description:
** hashtag
*/
#include "my.h"
#include <stdarg.h>

void hashtag_x(va_list str)
{
    char *base = "0123456789abcdef";
    flag_p(va_arg(str, char*), base);
    return;
}
