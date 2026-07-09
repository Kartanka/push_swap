
#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_putnbr_p(unsigned long ptr, int fd)
{
	unsigned char	c_char;
	int				count;
	char			*base;
	unsigned long	i;

	base = "0123456789abcdef";
	count = 0;
	if (ptr >= 16)
	{
		count += ft_putnbr_p((ptr / 16), fd);
		i = ptr % 16;
		c_char = base[i];
		count += write(fd, &c_char, 1);
	}
	else
	{
		i = ptr;
		c_char = base[i];
		write(fd, &c_char, 1);
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	unsigned int	b;

	b = 419;
	ft_putnbr_hex_lower(b, 1);
	return(0);
}
*/