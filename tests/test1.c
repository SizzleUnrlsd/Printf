/*
** EPITECH PROJECT, 2022
** unit test1
** File description:
** unit test1
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_strings, .init = redirect_all_std) {
    my_printf("abc");
    cr_assert_stdout_eq_str("abc");
}
