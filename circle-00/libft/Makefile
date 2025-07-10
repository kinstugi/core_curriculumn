CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_strmapi.c \
		ft_strlcpy.c \
		ft_isalnum.c \
		ft_putstr_fd.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_calloc.c \
		ft_strlcat.c \
		ft_putnbr_fd.c \
		ft_isdigit.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_memset.c \
		ft_isprint.c \
		ft_memccpy.c \
		ft_memcmp.c \
		ft_strtrim.c \
		ft_toupper.c \
		ft_strchr.c \
		ft_abs.c \
		ft_putendl_fd.c \
		ft_strncmp.c \
		ft_memcpy.c \
		ft_isascii.c \
		ft_strnstr.c \
		ft_isalpha.c \
		ft_strdup.c \
		ft_atoi.c \
		ft_memchr.c \
		ft_split.c \
		ft_substr.c \
		ft_memmove.c \
		ft_striteri.c
OBJS = $(SRCS:.c=.o)
B_SRC = ./ft_lstadd_back.c \
		./ft_lstadd_front.c \
		./ft_lstlast.c \
		./ft_lstmap.c \
		./ft_lstnew.c \
		./ft_lstdelone.c \
		./ft_lstiter.c \
		./ft_lstsize.c \
		./ft_lstclear.c 
B_OBJS = $(B_SRC:.c=.o)
NAME = libft.a

all: $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(B_OBJS)
fclean: clean
	rm -f $(NAME)
$(NAME): all
re: fclean all
bonus: $(B_OBJS)
	ar rcs $(NAME) $(B_OBJS)