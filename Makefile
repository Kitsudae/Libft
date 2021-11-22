NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
FILES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
ft_strnstr.c ft_toupper.c ft_tolower.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c \
ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c \
ft_putendl_fd.c

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ = $(FILES:.c=.o)
BONUS_OBJ = $(BONUS_FILES:.c=.o)

ifdef WITH_BONUS
OBJ_FILES = $(OBJ) $(BONUS_OBJ)
else
OBJ_FILES = $(OBJ)
endif

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rs $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<
bonus: 
	$(MAKE) WITH_BONUS=1 all

clean:
	rm -f $(OBJ_FILES) $(BONUS_OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean fclean all re bonus
