NAME = Animal

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
