/*
** EPITECH PROJECT, 2017
** check tests
** File description:
** check test
*/

#include <my.h>
#include <criterion/criterion.h>
#include <handle_flags.h>

Test(check_secondflags, my_first_function)
{
	char	a;
	int	b;

	a = 'e';
	b = check_flags(a);
	cr_assert_eq(b, 0);
}

Test(check_secondflags, my_second_function)
{
	char	a;
	int	b;

	a = 'b';
	b = check_flags(a);
	cr_assert_eq(b, 1);
}

Test(handle_second_flags, my_first_function)
{
	char	b = 'c';
	my_structt	*s;

	s = handle_second_flags(b);
	cr_assert_eq(s->c, 'c');
}

Test(handle_second_flags, my_second_function)
{
	char	b = 'a';

	cr_assert_eq(handle_second_flags(b), 0);
}

Test(handle_flags, my_first_function)
{
	char	b = 'c';
	my_struct	*s;

	s = handle_second_flags(b);
	cr_assert_eq(s->c, 'c');
}
