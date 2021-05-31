##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile tests_push_swap
##

SRC	=	../push_swap.c			\
		$(shell find -name "*.c")

UTFLAGS	=	--coverage -lcriterion

all:	tests_run

tests_run:
	gcc $(SRC) -o unit_test $(UTFLAGS) -L./../lib -lmy
	./unit_test

clean:
	$(shell find -name "*.gcda" -delete)
	$(shell find -name "*.gcno" -delete)
	rm -f *~

fclean:	clean
	rm -f unit_test
	clear

re: fclean all
