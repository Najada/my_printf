/*
** EPITECH PROJECT, 2017
** second_flags1.c
** File description:
** second_flags.1
*/

#include <my.h>
#include <stdio.h>

void	check_b(va_list list, int nb)
{
	int	number;
	char const	*base2 = "01";

	number = va_arg(list, int);
	nb = nb - count_digits(number) - 8;
	my_putnbr_unsignedbase(number, base2);
	while (nb > 0) {
		write(1, " " , 1);
		nb --;
	}
}
