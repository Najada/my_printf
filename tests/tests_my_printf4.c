/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my.h>

Test(my_printf, test1_1, .init = redirect1_all_std)
{
	my_printf("%x", 0xfffff);
	cr_assert_stdout_eq_str("fffff");
}

Test(my_printf, test2_1, .init = redirect1_all_std)
{
	my_printf("%b", 1565454);
	cr_assert_stdout_eq_str("101111110001100001110");
}

Test(my_printf, test23_1, .init = redirect1_all_std)
{
	my_printf("%-6d", 0x80000000);
	cr_assert_stdout_eq_str("-2147483648");
}

Test(my_printf, test24_1, .init = redirect1_all_std)
{
	my_printf("%-5d", 12);
	cr_assert_stdout_eq_str("12   ");
}

Test(my_printf, test12_1, .init = redirect1_all_std)
{
	my_printf("%-30sP", "astek");
	cr_assert_stdout_eq_str("astek                         P");
}
