/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>

Test(count_numbers, my_first_test)
{
	int	a;

	a = count_numbers(23);
	cr_assert_eq(a, 3);
}

Test(count_numbers, my_second_test)
{
	int	a;

	a = count_numbers(0);
	cr_assert_eq(a, 0);
}

Test(count_numbers, my_third_test)
{
	int	a;

	a = count_numbers(32);
	cr_assert_eq(a, 5);
}
