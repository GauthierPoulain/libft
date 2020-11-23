NAME = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror -O3
lIBC = ar rc
LIBI = ranlib
INC = ./libft.h
OBJS = $(SRCS:.c=.o)
SRCS = \
	ft_bzero.c  \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c  \
	ft_isdigit.c \
	ft_isprint.c  \
	ft_memccpy.c  \
	ft_memcpy.c  \
	ft_memset.c  \
	ft_strlen.c  \
	ft_toupper.c  \
	ft_tolower.c  

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INC)

all: $(NAME)

$(NAME): $(OBJS)
	$(lIBC) $(NAME) $(OBJS)
	$(LIBI) $(NAME)

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