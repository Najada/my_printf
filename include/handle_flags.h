/*
** EPITECH PROJECT, 2017
** handle_flags
** File description:
** handle_flags
*/

#ifndef _HANDLE_FLAGS_H
#define _HANDLE_FLAGS_H

typedef struct {
	char c;
	void (*f)(va_list list);
} my_struct;

typedef struct {
	char c;
	void (*f)(va_list list, int nb);
}my_structt;

my_structt	*handle_second_flags(char b);
int	check_secondflags(char c);
my_struct	*handle_flags(char b);
int     check_flags(char c);
void	fill_secondflags(char *second_flags, void **second_fflags, my_structt **structs);
void	fill_flags(char *flags, void **fflags, my_struct **structs);
void	check_plus_sign(char const *format, int *i, int *nb, va_list list);
void	set_number_positive(char const *format, int *i, int *nb, va_list list);
void	set_number_secondflags(char const *format, int *i, int *nb);

#endif // _HANDLE_FLAGS_H
