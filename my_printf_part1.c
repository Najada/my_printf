/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>

void	my_print_int(va_list list)
{
	int	int_number;

	int_number = va_arg(list, int);
	if (int_number == -2147483648)
		write(1, "-2147483648", 11);
	else
		my_put_nbr(int_number);
}

void	my_print_i(va_list list)
{
	int	int_number;

	int_number = va_arg(list, int);
	if (int_number == -2147483648)
		write(1, "-2147483648", 11);
	else
		my_put_nbr(int_number);
}

void	my_print_octal(va_list list)
{
	unsigned int	int_number;
	char const	*base = "01234567";

	int_number = va_arg(list, unsigned int);
	my_putnbr_unsignedbase(int_number, base);
}

void	my_print_decimal(va_list list)
{
	unsigned int	int_number;
	char const *base = "0123456789";

	int_number = va_arg(list, unsigned int);
	my_putnbr_unsignedbase(int_number, base);
}

void	my_print_string(va_list list)
{
	char	*str;
	
	str = my_strdup(va_arg(list, char*));
	my_putstr(str);
}
