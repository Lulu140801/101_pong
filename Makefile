##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## 101_pong
##

CC	=	gcc

SRC 	=		src/101pong.c\
				src/main.c\
				lib/my_putchar.c\
				lib/my_getnbr.c	\
				lib/my_put_nbr.c\

OBJ     =       $(SRC:.c=.o)

NAME	=	101pong

CFLAGS 	=	-lm -W -Wall -Wextra -pedantic


all:	$(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) 

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
