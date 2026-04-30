NAME = violence

SRC = \
	main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp

OBJ = $(SRC:.cpp=.o)

C++ = c++
C++FLAGS = -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C++FLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
