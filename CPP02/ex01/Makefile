CPP		= c++
CF		= -Wall -Wextra -Werror -std=c++98
SRC		= Fixed.cpp main.cpp
OBJ 	= $(SRC:.cpp=.o)
NAME	= Towards_a_more_useful_fixed-point_number_class

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CF) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CPP) $(CF) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all