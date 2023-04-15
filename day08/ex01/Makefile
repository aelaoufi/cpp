NAME = span

SRS = main.cpp Span.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -o

CC = c++

ALL : $(NAME)

$(NAME) : $(SRS)
	$(CC) $(FLAGS) $(NAME) $(SRS)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean ALL