NAME = Account

SRCS = 	Account.cpp \
		tests.cpp \

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = g++

ALL : $(NAME)

$(NAME) : $(SRCS)
	$(CC) -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean ALL