/*
** EPITECH PROJECT, 2022
** unit test9
** File description:
** unit test9
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, simple, .init = redirect_all_std) {
    my_printf("abc%d%i%s%c%%%n%C%b%C%C", 11, 2 * 2, "hello", 'x', '\n', 55, '\0', 'a');
    cr_assert_stdout_eq_str("abc114hellox%\n110111a");
}
