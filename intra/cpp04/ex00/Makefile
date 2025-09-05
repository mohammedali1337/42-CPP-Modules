C++		= c++ 
C_F		= -Wall -Wextra -Werror -std=c++98
SRC		= Animal.cpp Cat.cpp Dog.cpp main.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= EX_00

all: $(NAME) 

$(NAME): $(OBJ)
	$(C++) $(C_F) $(OBJ) -o $(NAME)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp
	$(C++) $(C_F) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

