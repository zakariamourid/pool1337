CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
LIBC = ar rcs
RM = rm -rf
FILES = srcs/ft_putchar srcs/ft_putstr srcs/ft_swap srcs/ft_strlen srcs/ft_strcmp
SRC = $(FILES:=.c)
OBJ = $(FILES:=.o)
INC = includes

.PHONY : all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I ${INC}

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

