/*
** EPITECH PROJECT, 2022
** unit test2
** File description:
** unit test2
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, simple_string, .init = redirect_all_std) {
    my_printf("abc%d", 11);
    cr_assert_stdout_eq_str("abc11");
}
