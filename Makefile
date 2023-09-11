SRC_NAME		=		ft_atoi.c \
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
						ft_putendl_fd.c \
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
						ft_toupper.c \

SRC_NAME_BONUS	=		ft_lstadd_back.c \
						ft_lstadd_front.c \
						ft_lstclear.c \
						ft_lstdelone.c \
						ft_lstiter.c \
						ft_lstlast.c \
						ft_lastmap.c \
						ft_lstnew.c \
						ft_lstsize.c \						


OBJ_NAME		=		$(SRC_NAME:.c=.o)
SRC				=		$(SRC_NAME)

OBJ_NAME_BONUS	=		$(SRC_NAME_BONUS:.c=.o)
SRC_BONUS		=		$(SRC_NAME_BONUS)

CC				=		cc
CFLAGS			=		-Wall -Wextra -Werror
NAME			=		libft.a

all:	$(NAME)

$(NAME): $(OBJ_NAME)
		ar -crs $(NAME) $(OBJ_NAME)

clean:
		rm -rf $(OBJ_NAME)

fclean: clean
		rm -f $(NAME)

re: fclean all

bonus: $(SRC_BONUS)
		@ar r $(NAME) $(SRC_BONUS)
		@echo "Bonus done!"
