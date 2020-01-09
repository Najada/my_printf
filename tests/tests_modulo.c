/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>

Test(check_modulo, my_first_function)
{
	int	a;

	a = check_modulo("%3456%");
	cr_assert_eq(a, 1);
}

Test(check_modulo, my_second_function)
{
	int	a;

	a = check_modulo("%3456");
	cr_assert_eq(a, 0);
}

Test(check_modulo, my_third_function)
{
	int	a;

	a = check_modulo("3456");
	cr_assert_eq(a, 0);
}
