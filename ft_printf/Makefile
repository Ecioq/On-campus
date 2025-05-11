# **************************************************************************** #
#                               LIBFT MAKEFILE                                 #
# **************************************************************************** #

NAME    = libftprintf.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror 

SRC     = ft_printf.c ft_putnbr.c ft_putchar.c ft_putstr.c ft_unsigint.c ft_putvoid.c\
ft_puthex.c
 

AR = ar rcs
RM = rm -f

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all



PHONY: all clean fclean re
