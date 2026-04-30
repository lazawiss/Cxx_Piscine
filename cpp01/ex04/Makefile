NAME = sed_for_loser

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

C++ = c++
C++FLAGS = -Wall -Werror -Wextra -std=c++98

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
