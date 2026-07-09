#include "ft_printf.h"

static int	ft_putfloat_frac_part(double frac, int precision, int fd)
{
	int		len;
	int		i;
	long	digit;

	len = 0;
	i = 0;
	while (i < precision)
	{
		frac *= 10;
		digit = (long)frac;
		len += ft_putchar_fd('0' + digit, fd);
		frac -= digit;
		i++;
	}
	return (len);
}

int	ft_putfloat(double n, int fd)
{
	int		len;
	long	int_part;
	double	frac_part;
	int		precision;

	len = 0;
	precision = 2;
	if (n < 0)
	{
		len += write(fd, "-", 1);
		n = -n;
	}
	int_part = (long)n;
	frac_part = n - int_part;
	len += ft_putnbr_fd(int_part, fd);
	len += write(fd, ".", 1);
	len += ft_putfloat_frac_part(frac_part, precision, fd);
	return (len);
}
