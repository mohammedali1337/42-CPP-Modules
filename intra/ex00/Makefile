C++		= c++
C++_F	= -Wall -Wextra -Werror
SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= megaphone

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
