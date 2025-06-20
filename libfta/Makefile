CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
NAME = kwaku

all: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
debug:
	$(CC) $(SRCS) -g -o $(NAME)
	lldb $(NAME)
