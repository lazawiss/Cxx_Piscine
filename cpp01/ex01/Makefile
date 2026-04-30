NAME = Moar_Brainz

CXX = c++
CXXFLAGS = -Wextra -Wall -Werror -std=c++98 -MMD -MP

SRC = \
	main.cpp \
	Zombie.cpp \
	zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

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

