NAME = harlFilter


CPP_FLAGS = -Wall -Werror -Wextra -g -std=c++98
CC = c++

SRC_DIR		=	./
SRC_NAME	=	main.cpp Harl.cpp

OBJ_DIR = obj/
OBJ_NAME = $(SRC_NAME:.cpp=.o)
DEP_NAME = $(SRC_NAME:.cpp=.d)
OBJ = $(patsubst %, $(OBJ_DIR)%, $(OBJ_NAME))
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
		@mkdir -p $(dir $@)
		@$(CC) $(CPP_FLAGS) $< -c -o $@
		@echo "\033[1;36m Compiled" $(*F)

%.o:%.cpp
		@$(CC) $(CPP_FLAGS) $< -c -o $@
		@echo "\033[1;36m Compiled" $<

$(NAME): $(OBJ)
		@c++ $(CPP_FLAGS) -o $(NAME) $(OBJ)
		@echo "\033[1;32m Executable" $(NAME) "created"

clean:
		@rm -rf $(OBJ_DIR)
		@echo "\033[1;31m Deleted all object files"

fclean: clean
		@rm -f $(NAME)
		@echo "\033[1;31m Deleted $(NAME)"

all: $(NAME)

re: fclean all