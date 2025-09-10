C++		= c++ 
C_F		= -Wall -Wextra -Werror -std=c++98 
SRC		= AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= EX_03

all: $(NAME) 

$(NAME): $(OBJ)
	$(C++) $(C_F) $(OBJ) -o $(NAME)

%.o: %.cpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
	$(C++) $(C_F) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

