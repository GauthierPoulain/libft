#include "libft.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	(void)argc;
	char *str;

	// char *strr = "894897897979879";

	// printf("%d\n", atoi(strr));
	// printf("%d\n", ft_atoi(strr));

	str = ft_itoa(ft_atoi(argv[1]));
	printf("%s\n", str);
	// while (*str)
	// 	printf("%c\n", *str++);
	return 0;
}
