/*
** EPITECH PROJECT, 2022
** unit test4
** File description:
** unit test4
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, simple_stri, .init = redirect_all_std) {
    my_printf("abc%d%i%s", 11, 2 * 2, "hello");
    cr_assert_stdout_eq_str("abc114hello");
}
