
CC = cc -Wall -Wextra -Werror

AR = ar rcs

RM = rm -rf

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putuns.c ft_puthex.c ft_putaddr.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

.PHONY : all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all