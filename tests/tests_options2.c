/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my.h>

Test(my_printf, test_of_my_printf, .init = redirect1_all_std)
{
	my_printf("%-15.12b", 1564545);
	cr_assert_stdout_eq_str("101111101111110000001");
}

Test(my_printf, test_of_my_printf2, .init = redirect1_all_std)
{
	my_printf("%#x", 0x54321);
	cr_assert_stdout_eq_str("0x54321");
}

Test(my_printf, test_of_my_printf3, .init = redirect1_all_std)
{
	my_printf("%#o", 054321);
	cr_assert_stdout_eq_str("054321");
}

Test(my_printf, test_of_my_printf4, .init = redirect1_all_std)
{
	my_printf("%lx", 0x24242424);
	cr_assert_stdout_eq_str("24242424");
}

Test(my_printf, test23, .init = redirect1_all_std)
{
 	my_printf("%-6.3d", 0x80000000);
	cr_assert_stdout_eq_str("-2147483648");
}
