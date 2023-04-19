/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** struct my_printf
*/

#ifndef STRUCTA_H_
    #define STRUCTA_H_
    #include <stdarg.h>

typedef struct myprintf {
    char c;
    void(*func)(va_list str);
} myprintf_t;

#endif /* STRUCTA_H_ */
