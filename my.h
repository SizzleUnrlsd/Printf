/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** library with prototypes
*/
#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
int flagf(double nb);
void adress(va_list str);
char *flag_p(void const *p, char const *base);
char *flag_upper_p(void const *p, char const *base);
int my_put_nbr_base(unsigned int nb, char const *base);
void upper_s(va_list str);
int flag_upper_s(char const *str);
int my_put_octal(unsigned int nb);
void octal(va_list str);
void nbrpos(va_list str);
int my_put_nbrpos(unsigned int nb);
int my_put_floatneg(double nb);
int my_put_float(double nb);
void float_f(va_list str);
void hexadecimal_min(va_list str);
void hexadecimal_maj(va_list str);
int hexa_maj(unsigned int nb, char const *base);
int hexa_min(unsigned int nb, char const *base);
void bin(va_list str);
int my_put_nbr_bin(int nb);
void redirect_all_std(void);
int my_printf(const char *format, ...);
void printable(va_list str);
void nothing(va_list str);
void decimal(va_list str);
void string(va_list str);
void charac(va_list str);
void digits(va_list str);
void pourc(va_list str);
int my_str_isprintable(char c);
char my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(long nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void hashtag_x(va_list str);
void hashtag_upper_x(va_list str);
void hashtag_d(va_list str);
int my_strcmp(char const *s1, char const *s2);
int my_put_octal_z(unsigned int nb);
void octal_z(va_list str);
void space_simple_d_i(va_list str);
void space_simple_f(va_list str);
int my_put_nbr_plus(long nb);
void digits_plus(va_list str);

#endif /* MY_H_ */
