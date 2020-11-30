NAME = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror -fno-builtin -O3
HEADERS = libft.h
OBJS = $(SRCS:.c=.o)
SRCS = \
	ft_atoi.c \
	ft_bzero.c  \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c  \
	ft_isdigit.c \
	ft_isprint.c  \
	ft_isspace.c \
	ft_itoa.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_memccpy.c  \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c  \
	ft_memmove.c \
	ft_memset.c  \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c  \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c  \
	ft_toupper.c  \

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

norm:
	norminette *.[ch]

build: fclean all
	make clean

.PHONY: all re clean fclean norm
