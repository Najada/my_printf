/*
** EPITECH PROJECT, 2017
** tests
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my.h>

Test(my_printf, tests_printf1, .init = redirect1_all_std)
{
	my_printf("%#d", 42);
	cr_assert_stdout_eq_str("42");
}

Test(my_printf, tests_printf2, .init = redirect1_all_std)
{
	my_printf("%0d", 42);
	cr_assert_stdout_eq_str("42");
}

Test(my_printf, tests_printf3, .init = redirect1_all_std)
{
	my_printf("%-d", 84);
	cr_assert_stdout_eq_str("84");
}

Test(my_printf, tests_printf4, .init = redirect1_all_std)
{
	char	*str;

	str = my_strdup("toto");
	str[1] = 6;
	my_printf("%S", str);
	cr_assert_stdout_eq_str("t\\006to");
}

Test(my_printf, tests_printf5, .init = redirect1_all_std)
{
	my_printf("%+d", -42);
	cr_assert_stdout_eq_str("-42");
}
