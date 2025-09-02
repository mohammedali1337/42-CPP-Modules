C++		= c++ 
C_F		= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= ex03

all: $(NAME) 

$(NAME): $(OBJ)
	$(C++) $(C_F) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	$(C++) $(C_F) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all