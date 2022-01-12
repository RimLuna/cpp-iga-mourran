NAME		=	zombieHorde

SRC			=	main.cpp \
				newZombie.cpp \
				randomChump.cpp \
				ZombieHorde.cpp \
				Zombie.cpp

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