/*
** EPITECH PROJECT, 2022
** unit test13
** File description:
** unit test13
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, si, .init = redirect_all_std) {
    my_printf("%u%u", 45, -1);
    cr_assert_stdout_eq_str("454294967295");
}
