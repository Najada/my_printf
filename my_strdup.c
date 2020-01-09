/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** my_strdup
*/

#include <my.h>

char	*my_strdup(char const *src)
{
	char	*mystr;
	int	i;
	int	a;

	a = my_strlen(src);
	mystr = malloc(sizeof(*src) * (a + 1));
	if (mystr == (char*)0)
		return (mystr);
	for (i = 0 ; i < a ; i++)
		mystr[i] = src[i];
	mystr[i] = '\0';
	return (mystr);
}

void	my_print_pointer(va_list list)
{
	unsigned int	int_number;

	my_putstr("0x");
	int_number = va_arg(list, int);
	my_putnbr_unsignedbase(int_number, "0123456789abcdef");
}
