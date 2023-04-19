/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-hugo.carolin
** File description:
** my_strcmp
*/
#include <stdio.h>
#include "my.h"

int cmp_string(char s1, char s2)
{
    if (s1 < s2) {
        return (-1);
    }
    return (1);
}

int my_strcmp(char const *s1, char const *s2)
{
    int n = 0;

    while (s1[n] != '\0' && (s2[n]) != '\0') {
        if (s1[n] != s2[n]) {
            return cmp_string(s1[n], s2[n]);
        }
        n++;
    }
    return (0);
}
