/*
** EPITECH PROJECT, 2022
** my
** File description:
** flagf
*/
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void ifcond2(int u_nb)
{
    if (u_nb >= 1 && u_nb < 10) {
        my_put_nbr(0);
        my_put_nbr(0);
        my_put_nbr(0);
        my_put_nbr(0);
        my_put_nbr(0);
    }
}

void ifcond(int u_nb)
{
    if (u_nb >= 10000 && u_nb < 100000) {
        my_put_nbr(0);
    }
    if (u_nb >= 1000 && u_nb < 10000) {
        my_put_nbr(0);
        my_put_nbr(0);
    }
    if (u_nb >= 100 && u_nb < 1000) {
        my_put_nbr(0);
        my_put_nbr(0);
        my_put_nbr(0);
    }
    if (u_nb >= 10 && u_nb < 100) {
        my_put_nbr(0);
        my_put_nbr(0);
        my_put_nbr(0);
        my_put_nbr(0);
    }
    ifcond2(u_nb);
}

int negative(double nb)
{
    long long c = 1000000;
    nb = nb * - 1;
    int u_nb = 0;

    u_nb = nb * c;
    u_nb = u_nb % c;
    my_putchar('-');
    my_put_nbr(nb);
    my_putchar('.');
    ifcond(u_nb);
    my_put_nbr(u_nb);
    return (0);
}

int flagf(double nb)
{
    int c = 1000000;
    long long u_nb;

    if (nb < 0) {
        negative(nb);
        return (0);
    }
    my_put_nbr(nb);
    my_putchar('.');
    u_nb = nb * c;
    u_nb = u_nb % c;
    ifcond(u_nb);
    my_put_nbr(u_nb);
    return (nb);
}
