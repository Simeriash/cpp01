NAME := Harl

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

SOURCES := main.cpp Harl.cpp

OBJECTS = $(SOURCES:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -I -c $< -o $@

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
