_END=\033[0m
_BOLD=\033[1m
_UNDER=\033[4m
_REV=\033[7m

_RED=\033[31m
_GREEN=\033[32m
_YELLOW=\033[33m
_BLUE=\033[34m
_PURPLE=\033[35m
_CYAN=\033[36m
_WHITE=\033[37m

_IGREY=\033[40m
_IRED=\033[41m
_IGREEN=\033[42m
_IYELLOW=\033[43m
_IBLUE=\033[44m
_IPURPLE=\033[45m
_ICYAN=\033[46m
_IWHITE=\033[47m

NAME = libftprintf.a

CC = clang
CFLAGS = -Wall -Wextra -Werror -fno-builtin -O3
MAKE = make --no-print-directory

HEADER = includes/libft_printf.h

OBJS = $(SRCS:%.c=%.o)
SRCS = \
	src/ft_printf.c \
	src/flags_init.c \
	src/parse_flags.c \
	src/get_types.c \
	src/print_int.c \
	src/print_utils.c \
	src/print_int_utils.c \
	src/print_char.c \
	src/print_string.c \
	src/print_pointer.c \
	src/print_unisgned.c \
	src/print_base.c \
	src/print_percent.c \
	src/print_double.c \

%.o: %.c $(HEADER)
	@printf "[ $(_GREEN)$(_BOLD)>+$(_END) ][ compiling ] $(_BLUE)$(_BOLD)$<$(_END)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@printf "[ $(_PURPLE)$(_BOLD)>>$(_END) ][ copying ] $(_BLUE)$(_BOLD)libft/libft.a$(_END) to $(_BLUE)$(_BOLD)$(NAME)$(_END)\n"
	@cp ../libft.a $(NAME)
	@printf "[ $(_GREEN)$(_BOLD)>+$(_END) ][ building ] $(_BLUE)$(_BOLD)$(NAME)$(_END)\n"
	@$(AR) rcs $(NAME) $(OBJS)
	@printf "[ $(_PURPLE)$(_BOLD)>>$(_END) ][ copying ] $(_BLUE)$(_BOLD)$(NAME)$(_END) to $(_BLUE)$(_BOLD)libft/libft.a$(_END)\n"
	@cp $(NAME) ../libft.a

clean:
	@printf "[ $(_RED)$(_BOLD)--$(_END) ][ removing ] $(_BLUE)$(_BOLD)printf objs $(_END)\n"
	@$(RM) $(OBJS)

fclean: clean
	@printf "[ $(_RED)$(_BOLD)--$(_END) ][ removing ] $(_BLUE)$(_BOLD)$(NAME) $(_END)\n"
	@$(RM) $(NAME)

re: fclean
	@$(MAKE) all

norm:
	norminette **/**.[ch]
	norminette *.[ch]

.PHONY: all clean fclean re norm