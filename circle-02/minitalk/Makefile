CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	server.c \
		client.c
OBJS = $(SRCS:.c=.o)
SERVER = server
CLIENT = client
$(SERVER): $(OBJS)
	$(CC) $(OBJS) -o $(SERVER)
$(CLIENT): $(OBJS)
	$(CC) $(OBJS) -o $(CLIENT)
all: 
	$(SERVER)  
	$(CLIENT)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(CLIENT) $(SERVER)
norm:
	c_formatter_42 $(C_SRCS) $(S_SRCS)