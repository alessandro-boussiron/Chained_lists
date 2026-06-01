##
## EPITECH PROJECT, 2026
## Chained_lists
## File description:
## Makefile
##

CC			=	clang

INCLUDE		=	-I./include/

CFLAGS		=	-Wall -Wextra $(INCLUDE)

SRCF		=	src/

SRC			=	$(SRCF)node_addition.c	\

OBJ			=	$(SRC:.c=.o)

NAME		=	ll_test

MAIN		=	$(SRCF)main.c

all:		$(NAME)

$(NAME): $(OBJ)
	$(CC) $(SRC) $(MAIN) $(CFLAGS) -o $(NAME)

%o:			%.c
	$(CC) $(LIB) -o $< -c $@

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
