/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** handle_flags
*/

#include <my.h>
#include <stdio.h>

my_structt	*handle_second_flags(char b)
{
	char	second_flags[] = {'d', 's', 'c', 'x', 'o', 'b', 0};
	void	*second_fflags[] = {&check_d, &check_s, &check_c,\
		&check_x, &check_o, &check_b, NULL};
	my_structt	**structs = malloc(sizeof(*structs) * 7);

	fill_secondflags(&second_flags[0], &second_fflags[0], structs); 
	for (int i = 0 ; structs[i] ; i ++) {
		if (structs[i]->c == b)
			return (structs[i]);
	}
	return (0);
}

my_struct	*handle_flags(char b)
{
	char	flags[] = {'d', 'i', 'o', 'u', 's', 'c', 'X', 'x',\
		'b', '%', 'S', 'p',  0};
	void	*fflags[] = {&my_print_int, &my_print_i, &my_print_octal\
				, &my_print_decimal, &my_print_string,\
				&my_print_character, &my_print_hexacapital, \
				&my_print_hexalow, &my_print_binary,\
				&my_print_modulo, &my_print_Sformat,\
				&my_print_pointer, NULL};
	my_struct	**structs = malloc(sizeof(*structs) * 12);

	fill_flags(&flags[0], &fflags[0], structs);
	for (int i = 0 ; structs[i] ; i ++) {
		if (structs[i]->c == b)
			return (structs[i]);
	}
	return (0);
}
