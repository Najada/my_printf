/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>
#include <handle_flags.h>

Test(check_flags, my_first_function)
{
	char	a;
	int	b;

	a = 'e';
	b = check_flags(a);
	cr_assert_eq(b, 0);
}

Test(check_flags, my_second_function)
{
	char	a;
	int	b;

	a = 'b';
	b = check_flags(a);
	cr_assert_eq(b, 1);
}

Test(my_put_nbr, test_my_put_nbr_1)
{
	cr_assert_eq(my_put_nbr(-123), 0);
}

Test(my_nb_len, test_my_nb_len_1)
{
	cr_assert_eq(my_nb_len(-1230), 1000);
}
