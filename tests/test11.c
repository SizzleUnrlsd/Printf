/*
** EPITECH PROJECT, 2022
** unit test11
** File description:
** unit test11
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, simp, .init = redirect_all_std) {
    my_printf("%X", 111);
    cr_assert_stdout_eq_str("6F");
}
