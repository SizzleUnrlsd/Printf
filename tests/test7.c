/*
** EPITECH PROJECT, 2022
** unit test7
** File description:
** unit test7
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, simple_s, .init = redirect_all_std) {
    my_printf("abc%d%i%s%c%%%n", 11, 2 * 2, "hello", 'x');
    cr_assert_stdout_eq_str("abc114hellox%");
}
