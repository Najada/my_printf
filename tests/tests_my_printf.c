/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, my_first_function, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, my_second_function, .init = redirect_all_std)
{
	my_printf("%d", 3);
	cr_assert_stdout_eq_str("3");
}

Test(my_printf, my_third_function, .init = redirect_all_std)
{
	my_printf("%i", 3);
	cr_assert_stdout_eq_str("3");
}

Test(my_printf, my_forth_function, .init = redirect_all_std)
{
	my_printf("%c", '*');
	cr_assert_stdout_eq_str("*");
}
