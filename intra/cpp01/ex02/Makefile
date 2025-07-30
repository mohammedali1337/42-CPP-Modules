C_F		= -Wall -Wextra -Werror -std=c++98
C++		= c++
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= HI_THIS_IS_BRAIN


all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C_F) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(C_F) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all