// Outputs the string 's' to the given file descriptor.

#include "libft.h"

int printf_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
	{
		len = write(1, "(null)", 6);
		return (len);
	}
	len = ft_strlen(s);
	write (fd, s, len);
	return (len);
}
