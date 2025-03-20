NAME = phonebook

SOURCES = phonebook.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CC = g++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
		@$(CC) $(OBJECTS) -o $(NAME)
		@printf "\rCompiled Phonebook ✅\n"

clean:
		@rm -f $(OBJECTS)
		@printf "Cleaned objects ✅\n"

fclean:	clean
		@rm -f $(NAME)
		@printf "Cleaned executables ✅\n"

re: fclean all