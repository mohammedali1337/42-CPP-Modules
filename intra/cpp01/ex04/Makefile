C++		= c++
C++_F	= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp
OB		= $(SRC:.cpp=.o)
NAME	= Sed_is_for_losers

all: $(NAME)

$(NAME):
		$(C++) $(C_F) $(OBJ) -o $(NAME)

	%.o: %.cpp
	$(C++) $(C_F) -c $< -o $@