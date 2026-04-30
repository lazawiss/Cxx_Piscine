NAME = Braiiiiiiinnnzzz

C++ = c++
C++FLAGS = -Wextra -Wall -Werror -std=c++98

SRC = \
	main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp

OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)


all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C++FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(C++FLAGS) -c $< -o $@
	
-include $(DEPS)

clean:
	rm -f $(OBJ) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
