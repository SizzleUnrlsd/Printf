/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-hugo.carolin
** File description:
** struct2
*/

#ifndef STRUCTB_H_
    #define STRUCTB_H_
    #include <stdarg.h>

typedef struct myprintf2 {
    char *chn;
    void(*func_)(va_list str);
} myprintf2_t;

#endif /* STRUCTB_H_ */
