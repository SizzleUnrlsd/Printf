/*
** EPITECH PROJECT, 2022
** unit test15
** File description:
** unit test15
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, str, .init = redirect_all_std) {
    my_printf("%S%S", "\a", "abc");
    cr_assert_stdout_eq_str("7abc");
}
