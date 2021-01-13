#include "libft.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
	(void)argc;
	int fd = open(argv[1], O_RDONLY);
	char **file = ft_read_file(fd);
	close(fd);
	ft_print_matrice(file);
	ft_free_tab(file);
	return 0;
}
