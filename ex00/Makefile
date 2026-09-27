NAME		= 00
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g3 -std=c++98 -Iincludes

SRCS		= srcs/main.cpp \

OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp includes/easyfind.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re