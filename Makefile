NAME	= push_swap
CC	= cc
CFLAGS  = -Wall -Werror -Wextra
SRC	= parsing.c main.c utils.c utils_libft.c

OBJ 	= $(SRC:.c=.o)

all:	$(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all