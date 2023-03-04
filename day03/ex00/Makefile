NAME = ClapTrap

SRS = main.cpp ClapTrap.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -o

CC = g++

ALL : $(NAME)

$(NAME) : $(SRS)
	$(CC) $(FLAGS) $(NAME) $(SRS)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean ALL