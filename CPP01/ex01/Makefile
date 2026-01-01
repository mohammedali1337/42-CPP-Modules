C++		= c++
C++_F	= -Wall -Wextra -Werror -std=c++98
SRC		=  main.cpp Zombie.cpp zombieHorde.cpp 
OBJ_S	= $(SRC:.cpp=.o)
NAME	= Moar_brainz!

all: $(NAME)

$(NAME):$(OBJ_S)
	$(C++) $(C++_F) -o $(NAME) $(OBJ_S)

%.o: %.cpp Zombie.hpp
	$(C++) $(C++_F) -c $< -o $@

clean: 
	rm -f $(OBJ_S)

fclean: clean 
	rm -rf $(NAME)

re: fclean all