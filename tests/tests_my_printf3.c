/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void edirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, first_function, .init = edirect_all_std)
{
	my_printf("% d", 84);
	cr_assert_stdout_eq_str(" 84");
}

Test(my_printf, second_function, .init = edirect_all_std)
{
	my_printf("%#d", 84);
	cr_assert_stdout_eq_str("84");
}

Test(my_printf, third_function, .init = edirect_all_std)
{
	my_printf("%0d", 84);
	cr_assert_stdout_eq_str("84");
}

Test(my_printf, forth_function, .init = edirect_all_std)
{
	my_printf("%-d", 84);
	cr_assert_stdout_eq_str("84");
}
