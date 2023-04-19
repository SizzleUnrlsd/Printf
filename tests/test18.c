/*
** EPITECH PROJECT, 2022
** unit test18
** File description:
** unit test18
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, test_min, .init = redirect_all_std) {
    my_printf("%d", -2147483647);
    cr_assert_stdout_eq_str("-2147483647");
}
