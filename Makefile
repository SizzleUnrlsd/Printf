##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##
SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

FLAGS 	=	-W -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	gcc -c $(SRC) $(FLAGS)
	ar rc $(NAME) $(OBJ)

clean	:
	rm -f $(OBJ)
	rm -f a.out
	rm -f *.gcno
	rm -f *.gcda
	rm -f *.c~

fclean	: clean
	rm -f $(NAME)

re	: fclean all

tests_run:
	gcc $(SRC) ./tests/$(SRC) $(FLAGS) -lcriterion --coverage
	./a.out
	gcovr
