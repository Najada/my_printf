##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC_DIR	=	$(realpath ..)

SRC	=	$(SRC_DIR)/my_putnbr_base.c  \
		$(SRC_DIR)/my_strdup.c       \
		$(SRC_DIR)/my_put_nbr.c \
		$(SRC_DIR)/my_strlen.c	\
		$(SRC_DIR)/my_putchar.c	\
		$(SRC_DIR)/my_putstr.c	\
		$(SRC_DIR)/my_printf_part1.c	\
		$(SRC_DIR)/my_printf_part2.c	\
		$(SRC_DIR)/second_flags.c	\
		$(SRC_DIR)/modulo.c	\
		$(SRC_DIR)/my_printf_utils.c	\
		$(SRC_DIR)/tests.c	\
		$(SRC_DIR)/second_flags1.c	\
		$(SRC_DIR)/handle_flags.c	\
		$(SRC_DIR)/handle_flags1.c	\
		$(SRC_DIR)/handle_flags2.c



SRC_UT_DIR	=	$(realpath .)
SRC_UT	=	$(SRC_UT_DIR)/tests_my_functions.c   \
		$(SRC_UT_DIR)/tests_check_flags.c	\
		$(SRC_UT_DIR)/tests_my_strdup.c	\
		$(SRC_UT_DIR)/tests_recursive.c	\
		$(SRC_UT_DIR)/tests_number_value.c	\
		$(SRC_UT_DIR)/tests_modulo.c	\
		$(SRC_UT_DIR)/check_hashtag.c	\
		$(SRC_UT_DIR)/tests_my_printf.c	\
		$(SRC_UT_DIR)/tests_my_printf1.c	\
		$(SRC_UT_DIR)/tests_my_printf2.c	\
		$(SRC_UT_DIR)/tests_my_printf3.c	\
		$(SRC_UT_DIR)/tests_options.c	\
		$(SRC_UT_DIR)/tests_options1.c	\
		$(SRC_UT_DIR)/tests_options2.c	\
		$(SRC_UT_DIR)/tests_check_secondflag.c	\
		$(SRC_UT_DIR)/tests_check_secondflag2.c	\
		$(SRC_UT_DIR)/tests_my_printf4.c	\
		$(SRC_UT_DIR)/tests_my_printf5.c

OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS	=	-Wall -Wextra -I../include --coverage
LDFLAGS	=	-lcriterion -lgcov -lm
NAME	=	units

all:	$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(LDFLAGS)
clean:
		rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
	rm *.gcda  -f $(NAME)
	rm *.gcno  -f $(NAME)
	rm *~ -f $(NAME)
	rm *.o -f $(NAME)

re:	fclean all
