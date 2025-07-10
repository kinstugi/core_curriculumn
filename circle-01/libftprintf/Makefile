CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)