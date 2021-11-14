NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AR = ar rc

RM = rm -f

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
FILES_BONUS =	ft_lstnew.c ft_lstadd_front.c \
				ft_lstadd_back.c ft_lstlast.c \
				ft_lstsize.c ft_lstdelone.c \
				ft_lstclear.c

# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_GREEN = \033[1;32m
C_BLUE = \033[1;34m
C_L_BLUE = \033[1;34m
C_WHITE = \033[1;37m
C_RES = \033[0m
C_YELLOW = \033[0;33m

OBJS = $(subst .c,.o,$(FILES))
OBJS_B = $(subst .c,.o,$(FILES_BONUS))

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "$(C_GREEN)[LIBFT CREATED]$(C_RES)"

bonus : $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)
	@echo "$(C_WHITE) [Part Bonus Complete] $(C_RES)"
clean :
	$(RM) $(OBJS)
	$(RM) $(OBJS_B)
	@echo "$(C_L_BLUE)[Objects deleted!]$(C_RES)"

fclean : clean
	$(RM) $(NAME)
	@echo "$(C_RED)[Removed $(NAME)]$(C_RES)"

re : fclean all
	@echo "$(C_YELLOW)[ Mission Passed!]$(C_RES)"
	@echo "$(C_YELLOW)[ Respect  + ]$(C_RES)"
	
.PHONY : all clean fclean re
