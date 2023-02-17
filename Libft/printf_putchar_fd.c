// Outputs the character 'c' to the given file descriptor

#include "libft.h"

int	printf_putchar_fd(char c, int fd)
{
	return (write (fd, &c, 1));
}
