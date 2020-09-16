##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Day10
##

SRC =	./do_op.c

LIB =	-L ./lib/my -lmy

INCLUDE =	-I ./include

OBJ =	$(SRC:.c=.o)

CFLAGS =	-W -Wall -Wextra -g $(INCLUDE)

NAME =	do-op

all:	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) $(LIB)

clean:
	make -C ./lib/my clean
	rm -f $(OBJ)

fclean: clean
	make -C ./lib/my fclean
	rm -f $(NAME)

re:	fclean all