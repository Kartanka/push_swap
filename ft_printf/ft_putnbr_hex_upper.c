
#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_putnbr_hex_upper(unsigned int n, int fd)
{
	char	c_char;
	int		count;
	char	*base;
	int		i;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
	{
		count += ft_putnbr_hex_upper((n / 16), fd);
		i = n % 16;
		c_char = base[i];
		count += write(fd, &c_char, 1);
	}
	else
	{
		i = n;
		c_char = base[i];
		count += write(fd, &c_char, 1);
	}
	return (count);
}
/*
int	main(void)
{
	unsigned int	b;

	b = 4294967295;
	ft_putnbr_hex_upper(b, 1);
	return(0);
}*/
