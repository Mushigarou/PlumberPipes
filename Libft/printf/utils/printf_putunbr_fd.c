#include "ft_printf.h"

int	printf_putunbr_fd(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		len = write(fd, "0", 1);
		return (len);
	}
	else if ((long long)n < INT_MIN)
		return ((len += write(fd, "-1", 1)), len);
	if (n < 0)
	{
		len += printf_putchar_fd('-', fd);
		n *= -1;
	}	
	if (ft_isdigit(n + '0'))
		len += printf_putchar_fd(n + 48, fd);
	if (n > 9)
	{
		len += printf_putunbr_fd(n / 10, fd);
		len += printf_putunbr_fd(n % 10, fd);
	}
	return (len);
}
