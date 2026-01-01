C_F		= -Wall -Wextra -Werror -std=c++98
C++		= c++
SRC		= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp 
OBJ		= $(SRC:.cpp=.o)
NAME	= Unnecessary_violence


all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C_F) $(OBJ) -o $(NAME)

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(C++) $(C_F) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all