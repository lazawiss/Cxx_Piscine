NAME = violence

SRC = \
	main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp

OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)


CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98 -MMD -MP

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
