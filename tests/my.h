/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** library with prototypes
*/
#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
void nbrpos(va_list str);
int my_put_nbrpos(int nb);
int my_put_floatneg(float nb);
int my_put_float(float nb);
void float_f(va_list str);
void hexadecimal_min(va_list str);
void hexadecimal_maj(va_list str);
int hexa_maj(int a);
int hexa_min(int a);
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
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);

#endif /* MY_H_ */
