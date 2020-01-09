/*
** EPITECH PROJECT, 2017
** my_printf_utils
** File description:
** my_printf
*/

#include <my.h>
#include <stdio.h>

void	check_zero(char const *format, int *i)
{
	if (format[*i + 1] == ' ') {
		if (format[*i + 2] >= '0' \
			&& format[*i + 2] <= '9')
			(*i)++;
		else {
			my_putstr(" ");
			(*i)++;
		}
	}
}

void	check_hashtag_functions(char const *format, int *i)
{
	if (check_hashtag(format[*i + 1]) == 1) {
		if (format[*i + 2] == 'd')
			(*i)++;
		else if (format[*i + 2] == 'x') {
			my_putstr("0x");
			(*i)++;
		} else if (format[*i + 2] == 'o') {
			my_putstr("0");
			(*i)++;
		}
	}
}
