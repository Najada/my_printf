/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** my_pustr
*/

#include <my.h>

int	my_putstr(char const *str)
{
	return (write(1, str, my_strlen(str)));;
}
