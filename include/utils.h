/*
** EPITECH PROJECT, 2017
** utils
** File description:
** utils
*/

#ifndef _UTILS_S
#define _UTILS_S

int	my_strlen(char const *str);
void	my_putchar(char c);
int	my_putstr(char const *str);
int	my_putnbrbase(int nbr, char const *base);
int	my_nb_len(int nb);
int	my_put_nbr(int nb);
int	my_printf(const char *format, ...);
char	*my_strdup(char const *src);
int	my_putnbr_unsignedbase(unsigned int nbr, char const *base);
int     count_numbers(int nb);
int	number_value(int nb1, int nb2);
int	check_modulo(char const *str);
int	check_hashtag(char c);
void	handle_sign(va_list list);
int	number1(va_list list);
int     my_put_long(int nb);
int	decimal_octal(int decimal);
int	count_digits(int num);
void	check_zero(char const *format, int *i);
void	check_hashtag_functions(char const *format, int *i);
void	redirect1_all_std(void);

#endif // _UTILS_S
