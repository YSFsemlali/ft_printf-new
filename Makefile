<<<<<<< HEAD
SRC= ft_printf.c ft_utils.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putptr.c ft_puthex.c ft_puthexup.c ft_putuns.c 
=======
SRC= ft_printf.c ft_parse.c ft_utils.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putptr.c ft_puthex.c ft_puthexup.c ft_putuns.c 
>>>>>>> 5d4b98d3049b04f89f8de8980330e18d8d3307d6
OBJ= $(SRC:.c=.o)
NAME= libftprintf.a
CC= gcc 
CFLAGS= -Wall  -Werror -Wextra

all: $(NAME) clean

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all