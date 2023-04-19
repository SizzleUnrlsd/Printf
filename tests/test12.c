/*
** EPITECH PROJECT, 2022
** unit test12
** File description:
** unit test12
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include <limits.h>

Test(my_printf, sim, .init = redirect_all_std) {
    int c = INT_MIN;
    my_printf("%f%f %d", -11.5, 11.5, c);
    cr_assert_stdout_eq_str("-11.50000011.500000 -2147483648");
}

