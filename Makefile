_END=\033[0m
_BOLD=\033[1m
_UNDER=\033[4m
_REV=\033[7m

# Colors
_GREY=\033[30m
_RED=\033[31m
_GREEN=\033[32m
_YELLOW=\033[33m
_BLUE=\033[34m
_PURPLE=\033[35m
_CYAN=\033[36m
_WHITE=\033[37m

# Inverted, i.e. colored backgrounds
_IGREY=\033[40m
_IRED=\033[41m
_IGREEN=\033[42m
_IYELLOW=\033[43m
_IBLUE=\033[44m
_IPURPLE=\033[45m
_ICYAN=\033[46m
_IWHITE=\033[47m

NAME = libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror -fno-builtin -O3

INCLUDES = includes

SRC_DIR = ./src
OBJ_DIR = ./.obj
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
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
	ft_realloc.c \
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
	

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDES)/*.h
	@mkdir -p $(OBJ_DIR)
	@printf "[ .. ] compile : $(_BOLD)$(<:.c=)$(_END)"
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@
	@printf "\r$(_GREEN)[ OK ]$(_END)\n"

all: $(NAME)

$(NAME): $(OBJS)
	@printf "[ .. ] building lib$(_END)"
	@$(AR) rc $(NAME) $(OBJS)
	@printf "\r$(_GREEN)[ OK ]$(_END)\n"

	@printf "[ .. ] creating index$(_END)"
	@ranlib $(NAME)
	@printf "\r$(_GREEN)[ OK ]$(_END)\n"


re: fclean all

clean:
	@printf "[ .. ] remove objects files$(_END)"
	@$(RM) $(OBJS)
	@printf "\r$(_RED)[ !! ]$(_END)\n"

fclean: clean
	@printf "[ .. ] remove lib file$(_END)"
	@$(RM) $(NAME)
	@printf "\r$(_RED)[ !! ]$(_END)\n"

norm:
	norminette src/*
	norminette includes/*

build: fclean all
	make clean

.PHONY: all re clean fclean norm
