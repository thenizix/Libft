
NAME = libft.a

SRC			=	ft_strlen.c ft_memmove.c  ft_memcpy.c  ft_strlcpy.c  ft_strlcat.c  \
				ft_isalpha.c  ft_isdigit.c  ft_isalnum.c  ft_isascii.c \
				ft_isprint.c ft_memset.c ft_bzero.c  ft_toupper.c \
				ft_tolower.c ft_strchr.c  ft_strrchr.c  ft_strncmp.c \
				ft_memchr.c  ft_memcmp.c  ft_strnstr.c  ft_atoi.c \
				ft_calloc.c  ft_strdup.c  ft_substr.c  ft_strjoin.c \
				ft_strtrim.c  ft_split.c  ft_itoa.c  ft_strmapi.c \
				ft_striteri.c  ft_putchar_fd.c  ft_putstr_fd.c  \
				ft_putendl_fd.c \
			 	ft_putnbr_fd.c 

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c
SRC_BONUS		= $(BONUS)

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RLIB = ar -s $(NAME)

REMOVE = rm -f

all: $(NAME) 

$(NAME):
	@$(COMPILE) $(SRC)
	echo 'compile .c'
	@$(LIB) $(OBJ)
	echo 'compile2 .c'
	@$(RLIB)
bonus:
	@$(COMPILE) $(SRC_BONUS)
	echo 'bonus'
	@$(LIB) $(OBJ_BONUS)
	echo 'bonus2'
	@$(RLIB)
	echo 'bonus3'
clean:
	echo 'clean'
	@$(REMOVE) $(OBJ)

fclean: clean
	echo 'fclean'
	@$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
