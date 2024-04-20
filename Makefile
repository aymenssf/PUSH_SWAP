NAME	= push_swap
NAMEB 	= checker
CC	= cc
CFLAGS  = -Wall -Werror -Wextra
SRC	= parsing.c main.c utils.c utils_libft.c sort_algo.c \
		operations/push.c operations/swap.c operations/rotate.c \
		operations/reverse_rotate.c sort_utils.c big_sort.c \

SRCB = checker.c parsing.c utils.c utils_libft.c \
		operations/push.c operations/swap.c operations/rotate.c \
		operations/reverse_rotate.c sort_utils.c gnl/get_next_line.c \
		gnl/get_next_line_utils.c


LIBFT  = libft/libft.a
OBJ 	= $(SRC:.c=.o)
OBJB 	= $(SRCB:.c=.o)
all: 	$(LIBFT) $(NAME)

bonus: 	$(LIBFT) $(NAMEB)
$(LIBFT):
	make -C libft
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -Llibft -lft -o $(NAME)

$(NAMEB): $(OBJB)
	$(CC) $(CFLAGS) $(OBJB) -Llibft -lft -o $(NAMEB)
clean:
	rm -f $(OBJ) $(OBJB)

fclean:	clean
	rm -f $(NAME) $(NAMEB)

re:	fclean all bonus
