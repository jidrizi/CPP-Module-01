CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

BIN_DIR = bin

OBJS = $(SRCS:%.cpp=$(BIN_DIR)/%.o)

NAME = Violence

all: $(NAME)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/%.o: %.cpp | $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(BIN_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re