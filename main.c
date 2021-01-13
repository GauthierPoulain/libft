#include "libft.h"
#include <math.h>
#include <fcntl.h>

int main()
{
	int		fd;
	char **file;

	fd = open("libft.h", O_RDONLY);
	file = ft_read_file(fd);
	ft_print_matrice(file);
	ft_free_tab(file);
	close(fd);
}
