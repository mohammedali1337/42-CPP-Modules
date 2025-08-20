CPP		= c++
CF		= -Wall -Wextra -Werror -std=c++98
SRC		= Fixed.cpp main.cpp
OBJ 	= $(SRC:.cpp=.o)
NAME	= My_First_Class_in_Orthodox_Canonical_Form

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CF) $(OBJ) -o $(NAME)

%.o: %.c Fixed.hpp
	$(CPP) $(CF) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all