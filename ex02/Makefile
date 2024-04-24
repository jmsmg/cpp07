CC = g++
FLAG = -Wall -Wextra -Werror -I. -std=c++98
NAME = a.out
OBJS = $(SRCS:.cpp=.o)
SRCS = main.cpp

%.o: %.cpp
	$(CC) $(FLAG) -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re