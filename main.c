#include "libft.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	(void)argc;

	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return 0;
}
