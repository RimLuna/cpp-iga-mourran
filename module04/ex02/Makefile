NAME		=	purify

SRC			=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	g++

FLAGS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re:	fclean all
