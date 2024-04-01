NAME	= push_swap
CC	= cc
CFLAGS  = -Wall -Werror -Wextra
SRC	= parsing.c main.c utils.c utils_libft.c
LIBFT  = libft/libft.a
OBJ 	= $(SRC:.c=.o)

all: 	$(LIBFT) $(NAME)

$(LIBFT):
	make -C libft
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -Llibft -lft -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all