/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printf
*/
#include <stdarg.h>
#include "my.h"
#include "structa.h"
#include "structb.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

myprintf_t func[] = {
    {'d', &digits},
    {'i', &digits},
    {'%', &pourc},
    {'s', &string},
    {'c', &charac},
    {'b', &bin},
    {'n', &nothing},
    {'C', &printable},
    {'x', &hexadecimal_min},
    {'X', &hexadecimal_maj},
    {'f', &float_f},
    {'u', &nbrpos},
    {'o', &octal},
    {'S', &upper_s},
    {'p', &adress},
    {0, NULL},
};

myprintf2_t func_[] = {
    {"#d", &digits},
    {"#x", &hashtag_x},
    {"#X", &hashtag_upper_x},
    {"#o", &octal_z},
    {"#f", &float_f},
    {"#g", &float_f},
    {"#G", &float_f},
    {"0d", &digits},
    {"-d", &digits},
    {"+d", &digits_plus},
    {" d", &space_simple_d_i},
    {" f", &space_simple_f},
    {" i", &space_simple_d_i},
    {"ld", &nbrpos},
    {"li", &nbrpos},
    {"lu", &nbrpos},
    {"lx", &hexadecimal_min},
    {"lo", &octal},
    {0, NULL},
};

int search(char c, va_list str)
{
    int save = 0;
    int i = 0;

    while (func[i].func != NULL ) {
        if (c == func[i].c) {
            save = save + 1;
            func[i].func(str);
        }
        i = i + 1;
    }
    return save;
}

int hashtag_next(char c, int i, va_list str, const char *format)
{
    int u = 0;
    i = i + 1;
    (void) c;
    char *chn = malloc(sizeof(char) * 3);
    chn[0] = format[i];
    chn[1] = format[i + 1];
    chn[2] = '\0';

    while (func_[u].func_ != NULL) {
        if (my_strcmp(chn, func_[u].chn) == 0) {
            func_[u].func_(str);
        }
        u++;
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list str;
    int i = 0, save = 0;
    va_start(str, format);
    while (format[i] != '\0') {
        if (format[i] == '%' && (format[i + 1] == '#' || format [i + 1] == '0'
            || format[i + 1] == '-' || format[i + 1] == '+'
            || format[i + 1] == ' ' || format[i + 1] == 'l' )) {
            hashtag_next(format[i + 1], i, str, format);
            i = i + 3;
            continue;
        }
        if (format[i] == '%') {
            save = search(format[i + 1], str);
            (save == 1 ? i = i + 1 : my_putchar(format[i]));
        } else
            my_putchar(format[i]);
        i = i + 1;
    }
    va_end(str);
    return 0;
}
