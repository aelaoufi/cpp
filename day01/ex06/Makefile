NAME = Harlfilter

SRCS =	main.cpp \
		Harl.cpp \

FLAGS = -Wall -Werror -Wextra -std=c++98 -o

CC = g++

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(NAME) $(SRCS)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean all