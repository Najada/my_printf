/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** handle flags of my_printf
*/

#include <my.h>
#include <stdio.h>

void	set_number_secondflags(char const *format, int *i, int *nb)
{
	*i = *i + 2;
	*nb = 0;
	while (format[*i] >= '0' && format[*i] <= '9') {
		*nb = 10 * *nb + format[*i] - '0';
		(*i)++;
	}
	if (format[*i] == '.') {
		(*i)++;
		while (format[*i] >= '0' && format[*i] <= '9')
			(*i)++;
	}
}

void	set_number_positive(char const *format, int *i, int *nb, va_list list)
{
	int	number;

	(*i)++;
	*nb = 0;
	while (format[*i] >= '0' && format[*i] <= '9') {
		*nb = 10 * *nb + format[*i] - '0';
		(*i)++;
	}
	if (format[*i] == 'd') {
		number = va_arg(list, int);
		*nb = *nb - count_digits(number);
		while (*nb > 0) {
			write(1, " " , 1);
			(*nb)--;
		}
		my_put_long(number);
	}
	(*i)++;
}

void	check_plus_sign(char const *format, int *i, int *nb, va_list list)
{
	int	number;

	*i = *i + 3;
	*nb = 0;
	while (format[*i] >= '0' && format[*i] <= '9') {
		*nb = *nb * 10 + format[*i] - '0';
		(*i)++;
	}
	number = va_arg(list, int);
	*nb = *nb - count_digits(number) - 1;
	my_putchar('+');
	my_put_long(number);
	while (*nb > 0) {
		write(1, " " , 1);
		(*nb) --;
	}
	(*i)++;
}
