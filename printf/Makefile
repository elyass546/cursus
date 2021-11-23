NAME = libftprintf.a

CC = @gcc -c

CFLAGS = -Wall -Wextra -Werror

AR = @ar -rc

RM = @rm -f

FILES = ft_nbrlen.c ft_printf.c  ft_putchar.c\
		ft_putnbr.c  ft_putstr.c  ft_strlen.c\
		check.c uns_nbr.c ft_conv_hex_low.c\
		print_hexadd.c ft_conv_hex_upp.c\

# Colors
C_YELLOW = \033[0;33m
C_PURPLE = \033[1;35m
C_GREEN = \033[1;32m
C_BLUE = \033[1;34m
C_RED = \033[1;31m
C_RES = \033[0m

OBJS = $(subst .c,.o,$(FILES))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(FILES)
	$(AR) $(NAME) $(OBJS)
	@echo "$(C_GREEN)[LIBFT CREATED]$(C_RES)"

clean :
	$(RM) $(OBJS)
	@echo "$(C_BLUE)[Objects deleted!]$(C_RES)"

fclean : clean
	$(RM) $(NAME)
	@echo "$(C_RED)[Removed $(NAME)]$(C_RES)"

re : fclean all
	@echo "$(C_YELLOW)[ Mission Passed!]$(C_RES)"
	@echo "$(C_YELLOW)[ Respect  + ]$(C_RES)"