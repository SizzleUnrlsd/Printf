/*
** EPITECH PROJECT, 2022
** unit test14
** File description:
** unit test14
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, s, .init = redirect_all_std) {
    my_printf("%o%o%o%o", 1, 55, -1, -55);
    cr_assert_stdout_eq_str("1673777777777737777777711");
}
