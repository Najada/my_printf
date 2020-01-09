/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>

Test(number_value, my_first_function)
{
	int	number;
	int	number2;

	number2 = 2;
	number = 0;
	number = number_value(number2, number);
	cr_assert_eq(number, 3);
}

Test(number_value, my_second_function)
{
	int	number;
	int	number2;

	number2 = 16;
	number = 0;
	number = number_value(number2, number);
	cr_assert_eq(number, 4);
}

Test(number_value, my_third_function)
{
	int	number;
	int	number2;

	number2 = 24;
	number = 0;
	number = number_value(number2, number);
	cr_assert_eq(number, 5);
}

Test(number_value, my_forth_function)
{
	int	number;
	int	number2;

	number2 = 32;
	number = 0;
	number = number_value(number2, number);
	cr_assert_eq(number, 6);
}
