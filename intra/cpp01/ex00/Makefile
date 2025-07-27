C++		= c++
C++_F	= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C++_F) $(OBJ) -o $(NAME)

.o: .cpp
	$(C++) $(C++_F) $< -c $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
