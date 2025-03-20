NAME = megaphone

SOURCES = megaphone.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
		@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
		@clear
		@printf "\rCompiled Megaphone ✅\n"

clean:
		@rm -f $(OBJECTS)
		@printf "Cleaned objects ✅\n"

fclean:	clean
		@rm -f $(NAME)
		@printf "Cleaned executables ✅\n"

re: fclean all