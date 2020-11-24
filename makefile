NAME = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
lIBC = ar rcs
INC = ./libft.h
OBJS = $(SRCS:.c=.o)
SRCS = \
	ft_bzero.c  \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c  \
	ft_isdigit.c \
	ft_isprint.c  \
	ft_isspace.c \
	ft_memccpy.c  \
	ft_memcpy.c  \
	ft_memmove.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_memset.c  \
	ft_strlen.c  \
	ft_toupper.c  \
	ft_tolower.c  \
	ft_strchr.c \
	ft_strncmp.c \
	ft_strrchr.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_substr.c

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INC)

all: $(NAME)

$(NAME): $(OBJS)
	$(lIBC) $(NAME) $(OBJS)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

norm:
	norminette *.[ch]

build: fclean all
	make clean

.PHONY: .c.o all re clean fclean norm