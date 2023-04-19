/*
** EPITECH PROJECT, 2022
** unit test20
** File description:
** unit test20
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <limits.h>

Test(my_printf, all_pars, .init = redirect_all_std) {
    my_printf("%ld %li %lu %-d %+d % d % f % i %0d %lx %lo", 42, 42, 42, 42, 42, 42, 0.5, 42, 42, 42, 42);
    cr_assert_stdout_eq_str("42 42 42 42 +42  42  0.500000  42 42 2a 52");
}

Test(my_printf, plus_d, .init = redirect_all_std) {
    long a = INT_MIN;
    my_printf("%+d %+d %+d %+d", -42, +42, a, +0);
    cr_assert_stdout_eq_str("-42 +42 -2147483648 +0");
}
