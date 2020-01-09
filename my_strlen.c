/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** my_strlen
*/

#include <my.h>

int	my_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

int	count_digits(int num)
{
	int count;

	count = 0;
	if (num > 0) {
		count++;
		return count_digits(num/10) + 1;
	} else
		return (count);
}

int     my_put_long(int nb)
{
	if (nb < 0) {
		nb = -1 * nb;
		my_putchar('-');
	} else if (!nb) {
		return (0);
	}
	my_put_long(nb/10);
	my_putchar(nb % 10 + '0');
	return (0);
}

void	my_print_modulo(va_list list)
{
	my_putchar('%');
}

