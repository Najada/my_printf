/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my.h>


Test(my_printf, test10, .init = redirect1_all_std)
{
	my_printf("%-5cP", 42);
	cr_assert_stdout_eq_str("*    P");
}

Test(my_printf, test11, .init = redirect1_all_std)
{
	my_printf("%-4xP", 0x42424242);
	cr_assert_stdout_eq_str("42424242P");
}

Test(my_printf, test14, .init = redirect1_all_std)
{
	my_printf("%-30o", 054321);
	cr_assert_stdout_eq_str("54321                         ");
}

Test(my_printf, test14_1, .init = redirect1_all_std)
{
	my_printf("%+d", 84);
	cr_assert_stdout_eq_str("+84");
}

Test(my_printf, test14_4, .init = redirect1_all_std)
{
	my_printf("%+d", -84);
	cr_assert_stdout_eq_str("-84");
}
