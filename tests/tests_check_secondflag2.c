/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>
#include <handle_flags.h>

Test(handle_flags, my_second_function)
{
	char	b = 'a';

	cr_assert_eq(handle_flags(b), 0);
}
