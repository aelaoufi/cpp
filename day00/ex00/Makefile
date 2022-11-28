NAME = megaphone

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

ALL = $(NAME)

$(NAME) : $(SRCS)
	$(CC) -o $(NAME) $(CFLAGS) $(SRCS)

clean :
	rm -rf $(NAME)

fclean : clean
	rm -rf $(NAME)

re : fclean ALL	
