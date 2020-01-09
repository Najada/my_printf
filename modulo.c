/*
** EPITECH PROJECT, 2017
** printf_modulo
** File description:
** print_modulo
*/

#include <my.h>

int	check_modulo(char const *str)
{
	int	i;

	i = 0;
	if (str[0] != '%')
		return (0);
	if (str[my_strlen(str) - 1] != '%')
		return (0);
	while (str[i]) {
		if (str[i] == '%' || str[i] == '-' \
			|| (str[i] >= 48 && str[i] <= 57))
			i++;
		else
			return (0);
	}
	return (1);
}

int	check_hashtag(char c)
{
	if (c == '#' || c == '0' || c == '-')
		return (1);
	return (0);
}

void	handle_sign(va_list list)
{
	int	number;

	number = va_arg(list, int);
	if (number < 0)
		my_put_nbr(number);
	else {
		my_putchar('+');
		my_put_nbr(number);
	}
}
