NAME = FragTrap

SRC = \
	main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98

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

fclean : clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re