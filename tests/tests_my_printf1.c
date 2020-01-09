/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect1_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, my_firs_function, .init = redirect1_all_std)
{
	my_printf("%s", "najada");
	cr_assert_stdout_eq_str("najada");
}

Test(my_printf, my_secon_function, .init = redirect1_all_std)
{
	my_printf("%p", 0x82244100);
	cr_assert_stdout_eq_str("0x82244100");
}

Test(my_printf, my_fort_function, .init = redirect1_all_std)
{
	my_printf("%X", 0xedcba);
	cr_assert_stdout_eq_str("EDCBA");
}

Test(my_printf, test21, .init = redirect1_all_std)
{
        my_printf("%+-12d", 54321);
        cr_assert_stdout_eq_str("+54321      ");
}
