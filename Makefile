##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## root push_swap
##

SRC	=	main.c	\
		push_swap.c

NAME	=	push_swap

all:	$(NAME) test_run clean

libmy:
	@make -sC lib/my/

$(NAME):	libmy
	@gcc -o $(NAME) $(SRC) -I./include -L./lib -lmy -g
	@echo -e "\033[05m\033[32mCompilation done => ${NAME}\033[00m"

test_run:
	@make  -sC tests/

clean:
	@make -sC lib/my/ clean
	@make  -sC tests/ clean
	@rm -f *~ include/*~ lib/my/*~ tests/*~

fclean:	clean
	make -sC lib/my/ fclean
	@make  -sC tests/ fclean
	rm -f $(NAME)
	clear

re:	fclean all
