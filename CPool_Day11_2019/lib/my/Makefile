##
## EPITECH PROJECT, 2019
## makefile lib
## File description:
## Day10
##

NAME	=	libmy.a

SRC		=	my_putchar.c	\

OBJ		=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
