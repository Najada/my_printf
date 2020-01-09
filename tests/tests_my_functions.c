/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>

Test(my_putchar, my_putchar_displays_c)
{
}

Test(my_put_nbr, test_my_put_nbr)
{
	cr_assert_eq(my_put_nbr(123), 0);
}

Test(my_nb_len, test_my_nb_len)
{
	cr_assert_eq(my_nb_len(1230), 1000);
}

Test(my_strlen, is_str_length_equal_to_len_v1)
{
	cr_assert(my_strlen("This is a test") == 14);
}

Test(my_pustr, my_putstr_returns_14)
{
	cr_assert_eq(my_putstr("This is a test"), 14);
}
