/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** putchar
*/
#include <unistd.h>

char my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
