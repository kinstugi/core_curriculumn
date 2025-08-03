NAME = my_minilibx_project
SRCS = main.c
OBJS = $(SRCS:.c=.o)

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -g

# Include directories
# -I/usr/local/include for mlx.h if copied there
# -I/usr/include for X11 headers
INCLUDES = -I/usr/local/include -I/usr/include

# Library directories and libraries to link
# -L/usr/local/lib for libmlx.a if copied there
# -L/usr/lib for system X11 libraries
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