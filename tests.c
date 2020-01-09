/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <stdio.h>
#include <handle_flags.h>
#include <second_flags.h>

int	my_printf(const char *format, ...)
{
	int	i;
	va_list	list;
	my_struct *s = malloc(sizeof(*s));
	my_structt *a = malloc(sizeof(*a));
	int nb;

	nb = 0;
	i = 0;
	if (check_modulo(format) == 1) {
		my_putchar('%');
		return (0);
	}
	va_start(list, format);
	while (format[i]) { 
		if (format[i] != '%') {
			my_putchar(format[i]);
			i++;
		} else if (format[i] == '%') {
			check_zero(format, &i);
			check_hashtag_functions(format, &i);
			if (format[i + 1] == 'l') {
				print_long(list);
				i = i + 3;
			} else if (format[i + 1] == '+' && format[i + 2] == '-' \
				&& (format[i + 3] >= '0' && format[i + 3] <= '9')) {
				check_plus_sign(format, &i, &nb, list);
			} else if (format[i + 1] >= '0' && format[i + 1] <= '9') {
				set_number_positive(format, &i, &nb, list);
			} else if (format[i + 1] == '-' && (format[i + 2] >= '0' \
				&& format[i + 2] <= '9')) {
				set_number_secondflags(format, &i, &nb);
				if (check_secondflags(format[i]) != 0) {
					a = handle_second_flags(format[i]);
					a->f(list, nb);
					i++;
				}
			} else if (check_flags(format[i + 1]) == 0 && format[i + 1] != '+') {
				my_putchar(format[i]);
				i++;
			} else if (check_flags(format[i + 1]) != 0) {
				s = handle_flags(format[i + 1]);
				s->f(list);
				i = i + 2;
			} else {
				handle_sign(list);
				i = i + 3;
			}
		}
	}
	va_end(list);
	return (0);
}
