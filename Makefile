##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_putnbr_base.c	\
		my_strdup.c	\
		my_put_nbr.c	\
		my_strlen.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_printf_part1.c	\
		my_printf_part2.c	\
		tests.c	\
		modulo.c	\
		my_printf_utils.c	\
		second_flags.c	\
		second_flags1.c	\
		handle_flags.c	\
		handle_flags1.c	\
		handle_flags2.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude
NAME	=	libmy.a


$(NAME):	$(OBJ)
		ar rc  $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm *~ -f $(NAME)
		rm *~ -f $(NAME)
		rm *.gcda -f $(NAME)
		rm *.gcno -f $(NAME)
		rm *~ -f $(NAME)
		rm *.o -f $(NAME)

re:
		fclean all
tests_run:
		make -C ./tests/
		./tests/units
