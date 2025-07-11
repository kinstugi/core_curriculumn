CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 	./ft_print_hex.c \
		./ft_putnbr.c \
		./ft_putchar.c \
		./ft_printf.c \
		./ft_putstr.c \
		./ft_putnbr_uint.c 
OBJS = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
