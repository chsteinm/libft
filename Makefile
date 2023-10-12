NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard ft*.c)
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	ar rcs $@ $^

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean
	make

.PHONY: all clean fclean re