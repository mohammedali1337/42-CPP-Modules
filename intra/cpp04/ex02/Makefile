C++		= c++ 
C_F		= -Wall -Wextra -Werror -std=c++98 
SRC		= AAnimal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp 
OBJ		= $(SRC:.cpp=.o)
NAME	= EX_02

all: $(NAME) 

$(NAME): $(OBJ)
	$(C++) $(C_F) $(OBJ) -o $(NAME)

%.o: %.cpp AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp
	$(C++) $(C_F) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

