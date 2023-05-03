NAME = RPN

SRS = main.cpp RPN.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -o

CC = c++

ALL : $(NAME)

$(NAME) : $(SRS)
	$(CC) $(FLAGS) $(NAME) $(SRS) -fsanitize=address -g

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean ALL