/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>

Test(check_hashtag, my_first_function)
{
	char	x;
	int	a;

	x = 'a';
	a = check_hashtag(x);
	cr_assert_eq(a, 0);
}

Test(check_hashtag, my_second_function)
{
	char	x;
	int	a;

	x = '#';
	a = check_hashtag(x);
	cr_assert_eq(a, 1);
}

Test(check_hashtag, my_third_function)
{
	char	x;
	int	a;

	x = '0';
	a = check_hashtag(x);
	cr_assert_eq(a, 1);
}

Test(check_hashtag, my_forth_function)
{
	char	x;
	int	a;

	x = '-';
	a = check_hashtag(x);
	cr_assert_eq(a, 1);
}
