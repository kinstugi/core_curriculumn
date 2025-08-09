NAME = so_long
SRCS = 	main.c \
		drawing_utils.c
OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g
INCLUDES = -I/usr/local/include -I/usr/include

LIBS = -L/usr/local/lib -lmlx -L/usr/lib -lXext -lX11 -lm -lz

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re