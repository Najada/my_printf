/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>

void	my_print_character(va_list list)
{
	char	c;

	c =(char)va_arg(list, int);
	my_putchar(c);
}

void	my_print_hexacapital(va_list list)
{
	unsigned int	int_number;
	char const	*base = "0123456789ABCDEF";

	int_number = va_arg(list, int);
	my_putnbr_unsignedbase(int_number, base);
}

void	print_long(va_list list)
{
	long int	number;
	char const	*base = "0123456789abcdef";
	
	number = va_arg(list, long int);
	my_putnbr_unsignedbase(number, base);
}

void	my_print_hexalow(va_list list)
{
	unsigned int	int_number;
	char const	*base = "0123456789abcdef";

	int_number = va_arg(list, int);
	my_putnbr_unsignedbase(int_number, base);
}

void	my_print_binary(va_list list)
{
	unsigned int	int_number;
	char const	*base = "01";

	int_number = va_arg(list, unsigned int);
	my_putnbr_unsignedbase(int_number, base);
}
