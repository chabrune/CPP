NAME = PmergeMe
SRC = $(wildcard *.cpp)
RM = rm -f
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean re fclean
