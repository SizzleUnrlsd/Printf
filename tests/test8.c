/*
** EPITECH PROJECT, 2022
** unit test8
** File description:
** unit test8
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, simple_, .init = redirect_all_std) {
    my_printf("abc%d%i%s%c%%%n%C", 11, 2 * 2, "hello", 'x', '\n');
    cr_assert_stdout_eq_str("abc114hellox%\n");
}
