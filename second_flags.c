/*
** EPITECH PROJECT, 2017
** second_flags
** File description:
** seconds flags
*/

#include <my.h>
#include <stdio.h>

void	check_d(va_list list, int nb)
{
	int	number;

	number = va_arg(list, int);
	if (number == -2147483648)
		write(1, "-2147483648", 11);
	else {
		nb = nb - count_digits(number);
		my_put_nbr(number);
		while (nb > 0) {
			write(1, " " , 1);
			nb --;
		}
	}
}

void	check_s(va_list list, int nb)
{
	char	*str;

	str = my_strdup(va_arg(list, char*));
	nb = nb - my_strlen(str);
	write(1, str, my_strlen(str));
	while (nb > 0) {
		write(1, " ", 1);
		nb--;
	}
}

void	check_c(va_list list, int nb)
{
	char	car;

	car = (char)va_arg(list, int);
	write(1, &car, 1);
	nb = nb - 1;
	while (nb > 0) {
		write(1, " ", 1);
		nb--;
	}
}

void	check_x(va_list list, int nb)
{
	char const	*base = "0123456789abcdef";
	int	number;

	number = va_arg(list, int);
	nb = nb - count_digits(number);
	my_putnbr_unsignedbase(number, base);
	while (nb > 0) {
		write(1, " " , 1);
		nb --;
	}
}

void	check_o(va_list list, int nb)
{
	int	number;
	char const	*base1 = "01234567";

	number = va_arg(list, int);
	nb = nb - count_digits(number);
	my_putnbr_unsignedbase(number, base1);
	while (nb > 0) {
		write(1, " " , 1);
		nb --;
	}
}
