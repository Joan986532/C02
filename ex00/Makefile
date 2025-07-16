NAME = Fixed

SOURCES = main.cpp \
		  Fixed.cpp

OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

#--------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ $(FLAGS) $(OBJECTS) -o $(NAME)

fclean: clean
	rm $(NAME)

clean:
	rm -f $(OBJECTS)

re: fclean all

.PHONY: all fclean clean re
