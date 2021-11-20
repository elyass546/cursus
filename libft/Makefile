NAME = libft.a

CC = @gcc -c

CFLAGS = -Wall -Werror -Wextra

AR = @ar -rc

RM = @rm -f

FILES = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_isalpha.c ft_isdigit.c ft_isalnum.c\
		ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c\
		ft_strrchr.c ft_strncmp.c ft_memchr.c\
		ft_isascii.c ft_isprint.c ft_strlen.c\
		ft_itoa.c ft_strmapi.c ft_striteri.c\
		ft_strjoin.c ft_strtrim.c ft_split.c\
		ft_calloc.c ft_strdup.c ft_substr.c\
		ft_memcmp.c ft_strnstr.c ft_atoi.c\
		ft_memset.c ft_bzero.c ft_memcpy.c\
		ft_putnbr_fd.c
FILES_BONUS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
				ft_lstadd_back_bonus.c ft_lstlast_bonus.c \
				ft_lstsize_bonus.c ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c ft_lstiter_bonus.c

# Colors
C_YELLOW = \033[0;33m
C_PURPLE = \033[1;35m
C_GREEN = \033[1;32m
C_BLUE = \033[1;34m
C_RED = \033[1;31m
C_RES = \033[0m

OBJS = $(subst .c,.o,$(FILES))
OBJS_B = $(subst .c,.o,$(FILES_BONUS))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(FILES)
	$(AR) $(NAME) $(OBJS)
	@echo "$(C_GREEN)[LIBFT CREATED]$(C_RES)"

clean :
	$(RM) $(OBJS)
	$(RM) $(OBJS_B)
	@echo "$(C_BLUE)[Objects deleted!]$(C_RES)"

fclean : clean
	$(RM) $(NAME)
	@echo "$(C_RED)[Removed $(NAME)]$(C_RES)"

bonus : $(OBJS_B)

$(OBJS_B) : $(FILES_BONUS)
	$(CC) $(CFLAGS) $(FILES_BONUS)
	$(AR) $(NAME) $(OBJS_B)
	@echo "$(C_PURPLE)[Part Bonus Complete] $(C_RES)"

re : fclean all
	@echo "$(C_YELLOW)[ Mission Passed!]$(C_RES)"
	@echo "$(C_YELLOW)[ Respect  + ]$(C_RES)"

rebonus : fclean bonus
	@echo "$(C_YELLOW)[ Mission Passed!]$(C_RES)"
	@echo "$(C_YELLOW)[ Respect  + ]$(C_RES)"
