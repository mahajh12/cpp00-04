
NAME	=	megaphone
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm	-rf
SRCS 	=	megaphone.cpp

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re