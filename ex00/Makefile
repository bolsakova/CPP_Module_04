NAME = polymorphism

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

FILES = main Animal Cat Dog WrongAnimal WrongCat

SRCDIR = src
# SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp
SRC = $(addsuffix .cpp, $(FILES))

vpath %.cpp src

OBJDIR = obj
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

# INC = Animal.hpp Dog.hpp Cat.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR) # $(INC)
	$(CXX) $(CXXFLAGS) -c -I inc $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJDIR)/*.o
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
