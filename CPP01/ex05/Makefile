C_F		= -Wall -Wextra -Werror -std=c++98
C++		= c++
SRC		= main.cpp Harl.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	=  Harl_2.0


all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C_F) $(OBJ) -o $(NAME)

%.o: %.cpp Harl.hpp
	$(C++) $(C_F) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all