/*
** EPITECH PROJECT, 2017
** tests other options
** File description:
** tests other options
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my.h>

Test(my_printf, tests_my_printf1, .init = redirect1_all_std)
{
	my_printf("%-6cP", 84);
	cr_assert_stdout_eq_str("T     P");
}

Test(my_printf, tests_my_printf2, .init = redirect1_all_std)
{
	my_printf("% 5d", 84);
	cr_assert_stdout_eq_str("   84");
}

Test(my_printf, tests_my_printf3, .init = redirect1_all_std)
{
	my_printf("%6d", 84);
	cr_assert_stdout_eq_str("    84");
}

Test(my_printf, tests_my_printf4, .init = redirect1_all_std)
{
	my_printf("%-4xP", 0x24242424);
	cr_assert_stdout_eq_str("24242424P");
}

Test(my_printf, tests_my_printf5, .init = redirect1_all_std)
{
	my_printf("%-28sP", "koala");
	cr_assert_stdout_eq_str("koala                       P");
}
