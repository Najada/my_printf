/*
** EPITECH PROJECT, 2017
** handle_flags
** File description:
** handle_flags
*/

#include <my.h>

void	fill_flags(char *flags, void **fflags, my_struct **structs)
{
	int	i = 0;

	while (flags[i]) {
		my_struct *s = malloc(sizeof(*s));
		s->c = flags[i];
		s->f = fflags[i];
		structs[i] = s;
		i++;
	}
	structs[i] = NULL;
}

void	fill_secondflags(char *flags, void **fflags, my_structt **st)
{
	int	i = 0;

	while (fflags[i]) {
		my_structt *s = malloc(sizeof(*s));
		s->c = flags[i];
		s->f = fflags[i];
		st[i] = s;
		i++;
	}
	st[i] = NULL;
}

int     check_flags(char c)
{
	int	i;
	char const	*str = "diouscXxb%Sp";

	i = 0;
	while (str[i]) {
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	check_secondflags(char c)
{
	int	i;
	char const	*str = "dscxob";

	i = 0;
	while (str[i]) {
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}
