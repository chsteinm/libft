NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c
OBJ = $(SRCS:.c=.o)
SRCS_BONUS =	ft_lstadd_back_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstmap_bonus.c \
				ft_lstnew_bonus.c \
				ft_lstsize_bonus.c
OBJ_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	ar rcs $@ $^

bonus: $(NAME) $(OBJ_BONUS)
	@if [ "$$(find $(OBJ_BONUS) -newer "$(NAME)" -print -quit)" ]; then \
		ar rcs $(NAME) $^; \
	else \
		echo "make: Nothing to be done for 'bonus'."; \
	fi

%.o: %.c Makefile
	cc $(CFLAGS) -MMD -MP -c $< -o $@

-include $(OBJ:.o=.d) $(OBJ_BONUS:.o=.d)

clean:
	rm -f *.o *.d

fclean: clean
	rm -f $(NAME)

re : fclean
	make

.PHONY: all clean fclean re bonus
