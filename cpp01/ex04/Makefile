NAME = sed_for_loser

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
-include $(DEPS)

clean:
	rm -f $(OBJ) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
