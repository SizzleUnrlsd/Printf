/*
** EPITECH PROJECT, 2022
** test16
** File description:
** test16
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_printf, flagf, .init = redirect_all_std) {
    my_printf("%f %f %f %f %f %f %k %z", 0.5, 0.05, 0.005, 0.0005, 0.00005, 0.000005);
    cr_assert_stdout_eq_str("0.500000 0.050000 0.005000 0.000500 0.000050 0.000005 %k %z");        
}
