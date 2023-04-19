/*
** EPITECH PROJECT, 2022
** unit test10
** File description:
** unit test10
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include <limits.h>

Test(my_printf, simpl, .init = redirect_all_std) {
    my_printf("%x%b%d", 111, -1, -1);
    cr_assert_stdout_eq_str("6f-1-1");
}
