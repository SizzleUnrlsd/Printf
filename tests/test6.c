/*
** EPITECH PROJECT, 2022
** unit test6
** File description:
** unit test6
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, simple_st, .init = redirect_all_std) {
    my_printf("abc%d%i%s%c%%", 11, 2 * 2, "hello", 'x');
    cr_assert_stdout_eq_str("abc114hellox%");
}
