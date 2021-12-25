CC = g++
CFLAGS = -Wall -Werror -Wextra -g
 
megaphone: megaphone.o
	$(CC) $(CFLAGS) -o megaphone megaphone.o
 
megaphone.o: megaphone.cpp
	$(CC) $(CFLAGS) -c megaphone.cpp

clean: megaphone.o
	rm megaphone.o

fclean:	clean
	rm megaphone

re:	fclean megaphone