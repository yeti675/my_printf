NAME = my_printf

SRC = Srcs/*.c

all: $(NAME)

$(NAME):
	gcc -Wall -o $(NAME) $(SRC)
	
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all