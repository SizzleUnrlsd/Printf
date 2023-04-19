/*
** EPITECH PROJECT, 2022
** test17
** File description:
** test17
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, mini, .init = redirect_all_std)
{
    int n = 10;
    char buffer[128] = {0};
    sprintf(buffer, "%p", &n);
    my_printf("%p", &n);
    cr_assert_stdout_eq_str(buffer);
}
