NAME = zombieHorde

SRCS =	Zombie.cpp \
		main.cpp \
		zombieHorde.cpp \

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

ALL : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean ALL
