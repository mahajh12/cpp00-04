
NAME	=	Phonebook
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm	-rf

SRCS 	=	PhoneBook.cpp	\
			Contact.cpp 	\
			main.cpp

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