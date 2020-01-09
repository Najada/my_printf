/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** my_putnbr_base
*/

#include <my.h>

int	my_putnbrbase(int nbr, char const *base)
{
	if (!nbr)
		return (0);
	my_putnbrbase(nbr / my_strlen(base), base);
	write(1, &base[nbr % my_strlen(base)], 1);
	return (0);
}

int	my_putnbr_unsignedbase(unsigned int nbr, char const *base)
{
	if (!nbr)
		return (0);
	my_putnbrbase(nbr / my_strlen(base), base);
	write(1, &base[nbr % my_strlen(base)], 1);
	return (0);
}

int     count_numbers(int nb)
{
	if (!nb)
		return (0);
	return (1 + nb / 8);
}

void	my_print_Sformat(va_list list)
{
	char	*str;
	int	i;
	int	b;
	int	number;

	i = 0;
	str = my_strdup(va_arg(list, char*));
	while (str[i]) {
		if (str[i] <= 32 || str[i] >= 127) {
			my_putchar('\\');
			b = count_numbers(str[i]);
			number = number_value(str[i], number);
			while (b < number) {
				my_putchar('0');
				b++;
			}
			my_putnbrbase(str[i], "01234567");
		} else
			my_putchar(str[i]);
		i++;
	}
}

int	number_value(int nb1, int nb2)
{
	nb2 = 3;
	if (nb1 >= 16 && nb1 < 24)
		nb2 = 4;
	else if (nb1 >= 24 && nb1 < 32)
		nb2 = 5;
	else if (nb1 >= 32)
		nb2 = 6;
	return (nb2);
}
