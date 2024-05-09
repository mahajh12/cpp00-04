NAME	=	Polymorphism
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm	-rf

SRCS 	=	main.cpp 		\
			Cat.cpp  		\
			Dog.cpp 		\
			WrongAnimal.cpp \
			WrongCat.cpp	\
			Animal.cpp

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