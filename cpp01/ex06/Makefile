NAME = harlFilter

SRC = \
	main.cpp \
	Harl.cpp

OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

C++ = c++
C++FLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP

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