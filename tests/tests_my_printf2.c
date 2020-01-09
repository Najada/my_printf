/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirec_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, my_irst_fnction, .init = redirec_all_std)
{
	my_printf("%%");
	cr_assert_stdout_eq_str("%");
}

Test(my_printf, my_econd_function, .init = redirec_all_std)
{
	my_printf("%o", 054321);
	cr_assert_stdout_eq_str("54321");
}

Test(my_printf, my_hird_function, .init = redirec_all_std)
{
	my_printf("%u", 84);
	cr_assert_stdout_eq_str("84");
}

Test(my_printf, my_orth_function, .init = redirec_all_std)
{
	my_printf("%60%");
	cr_assert_stdout_eq_str("%");
}
