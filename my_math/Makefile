##
## EPITECH PROJECT, 2019
## Lib My_Math
## File description:
## Makefile
##

SRC =   my_absolute_value.c \
        my_compute_power_rec.c \
        my_compute_square_root.c \
        my_find_prime_sup.c \
        my_isneg.c \
        my_is_prime.c \
        my_overflow_check.c \
        my_unsign.c

OBJ =   $(SRC:.c=.o)

NAME    =   libmy_math.a

all:    $(NAME)
    cp $(NAME) ../
    mkdir -p ../../include/
    cp my_math.h ../../include/

$(NAME):        $(OBJ)
        ar rc $(NAME) $(OBJ)

clean:
        rm -f $(OBJ)
        rm -f $(NAME)

fclean: clean
        rm -f ../$(NAME)
        rm -f ../../include/my_math.h

re: fclean all