/*
** EPITECH PROJECT, 2022
** unit test19
** File description:
** unit test19
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_printf, hashtag, .init = redirect_all_std) {
    my_printf("%#d", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, hashtago, .init = redirect_all_std) {
    my_printf("%#o", 42);
    cr_assert_stdout_eq_str("052");
}

Test(my_printf, hashtagx, .init = redirect_all_std) {
    my_printf("%#x", 42);
    cr_assert_stdout_eq_str("0x2a");
}

Test(my_printf, upper_x, .init = redirect_all_std) {
    my_printf("%#X", 42);
    cr_assert_stdout_eq_str("0X2A");
}

Test(my_printf, hashtag_g, .init = redirect_all_std) {
    my_printf("%#g", 0.5);
    cr_assert_stdout_eq_str("0.500000");
}

Test(my_printf, hashtag_f, .init = redirect_all_std) {
    my_printf("%#f", 0.5);
    cr_assert_stdout_eq_str("0.500000");
}

Test(my_printf, upper_g, .init = redirect_all_std) {
    my_printf("%#G", 0.5);
    cr_assert_stdout_eq_str("0.500000");
}

Test(myprintf, all, .init = redirect_all_std) {
    my_printf("%#d%#o%#x%#X%#g%#f%#G", 42, 42, 42, 42, 0.5, 0.5, 0.5);
    cr_assert_stdout_eq_str("420520x2a0X2A0.5000000.5000000.500000");
}

Test(myprintf, all_spaces, .init = redirect_all_std) {
    my_printf("%#d %#o %#x %#X %#g %#f %#G", 42, 42, 42, 42, 0.5, 0.5, 0.5);
    cr_assert_stdout_eq_str("42 052 0x2a 0X2A 0.500000 0.500000 0.500000");
}
