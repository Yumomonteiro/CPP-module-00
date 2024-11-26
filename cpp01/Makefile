NAME = zombie

SRCS = main.cpp Zombie.cpp
	
CXX = c++
CXXFLAGS = -Wall -Wextra -g -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: