
SRC = $(wildcard *.cpp) 
OBJ = $(SRC:.cpp=.o)
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Bitcoin

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re