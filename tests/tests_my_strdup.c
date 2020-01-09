/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>

Test(my_strdup, my_first_strdup)
{
	char	*mystr;

	mystr = my_strdup("najada");
	cr_assert_str_eq(mystr, "najada");
}

Test(my_strdup, my_second_strdup)
{
	char	*mystr;

	mystr = my_strdup("");
	cr_assert_str_eq(mystr, "");
}

Test(my_putnbrbase, my_first_function)
{
	cr_assert_eq(my_putnbrbase(10, "abcdef"), 0);
}

Test(my_putnbr_unsignedbase, my_first_function)
{
	cr_assert_eq(my_putnbr_unsignedbase(10, "abcdef"), 0);
}
