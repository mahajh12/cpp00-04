NAME = zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp 		\
	  Zombie.cpp	\
	  zombieHorde.cpp

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} -std=c++98 ${OBJ} -o $@

%.o: %.cpp
	${CC} ${CFLAGS} -std=c++98 -c $<

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re:	fclean all