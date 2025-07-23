CC = cc
CFLAGS = -Wall -Wextra -Werror
S_SRCS = server.c
C_SRCS = client.c
EXTRA_SRCS = ft_itoa.c \
			utility_funcs.c
S_OBJS = $(S_SRCS:.c=.o)
C_OBJS = $(C_SRCS:.c=.o)
E_OBJS = $(EXTRA_SRCS:.c=.o)
SERVER = server
CLIENT = client
$(SERVER):  $(E_OBJS) $(S_OBJS)
	$(CC) $(E_OBJS) $(S_OBJS) -o $(SERVER)
$(CLIENT): $(E_OBJS) $(C_OBJS)
	$(CC) $(E_OBJS) $(C_OBJS) -o $(CLIENT)
all: $(SERVER) $(CLIENT)
clean:
	rm -f $(C_OBJS) $(S_OBJS) $(E_OBJS)
fclean: clean
	rm -f $(CLIENT) $(SERVER)
norm:
	c_formatter_42 $(C_SRCS) $(S_SRCS)