#include <stdio.h>
#include <unistd.h>

int	ft_putnbr_uns(unsigned int n, int fd)
{
	char	c;
	int		count;

	count = 0;
	if (n > 9)
	{
		count += ft_putnbr_uns((n / 10), fd);
		c = n % 10 + '0';
		count += write(fd, &c, 1);
	}
	else
	{
		c = n + '0';
		count += write(fd, &c, 1);
	}
	return (count);
}
/*
int	main(void)
{
	int	b;

	b = -2147483;
	ft_putnbr_fd(b, 1);
	return(0);
}
*/