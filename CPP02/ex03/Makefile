CPP		= c++
CF		= -Wall -Wextra -Werror -std=c++98
SRC		= Fixed.cpp main.cpp bsp.cpp Point.cpp 
OBJ 	= $(SRC:.cpp=.o)
NAME	= ex03

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CF) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp Point.hpp
	$(CPP) $(CF) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all