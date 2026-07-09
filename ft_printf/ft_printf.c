#include "ft_printf.h"

static int	print(va_list *args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_putchar_fd(va_arg(*args, int), 1);
	if (format == 's')
		len = ft_putstr_fd(va_arg(*args, char *), 1);
	else if (format == 'd' || format == 'i')
		len = ft_putnbr_fd(va_arg(*args, int), 1);
	else if (format == 'u')
		len = ft_putnbr_uns(va_arg(*args, unsigned int), 1);
	else if (format == 'x')
		len = ft_putnbr_hex_lower(va_arg(*args, unsigned int), 1);
	else if (format == 'X')
		len = ft_putnbr_hex_upper(va_arg(*args, unsigned int), 1);
	else if (format == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_putnbr_p((unsigned long)va_arg(*args, void *), 1);
	}
	else if (format == 'f')
		len = ft_putfloat(va_arg(*args, double), 1);
	else if (format == '%')
		len = write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		total_print;

	total_print = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			total_print += print(&args, format[i]);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			total_print++;
		}
		i++;
	}
	va_end(args);
	return (total_print);
}
/*int main()
{
	int		count;
	int		count2;
	char	*s;
	void	*p;
	int		len1;
	int		len2;

	count = ft_printf("%X",419);
	printf("\n count = %d\n", count);
	count2 = printf("%X",419);
		printf("\n count2 = %d", count2);
	return(0);
}
#include <limits.h>

*/
/*
int	main(void)
{
	int	len1;
	int	len2;

	// char *s = NULL;
	 int             d = -2147483648;
	//  unsigned int    u = 4294967295;
	// p = s;
	len1 = 0;
	len2 = 0;
	// --- Сравнение с оригинальным printf ---
	printf("--- Original printf ---\n");
	// len1 = printf("String: [%s]\n", s);
	  len1 += printf("Decimal (int_min): [%d]\n", d);
	 // len1 += printf("Integer (int_min): [%i]\n", d);
	//  len1 += printf("Unsigned (uint_max): [%u]\n", u);
	//  len1 += printf("Hex (lower): [%x]\n", u);
	//  len1 += printf("Hex (upper): [%X]\n", u);
	// len1 += printf("Pointer: [%p]\n", p);
	//len1 += printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	// len1 += printf("Percent: [%%]\n");
	printf("Total length: %d\n", len1);
	printf("\n");
	// --- Ваша реализация ft_printf ---
	ft_printf("--- Your ft_printf ---\n");
	// len2 = ft_printf("String: [%s]\n", s);
	  len2 += ft_printf("Decimal (int_min): [%d]\n", d);
	//  len2 += ft_printf("Integer (int_min): [%i]\n", d);
	//  len2 += ft_printf("Unsigned (uint_max): [%u]\n", u);
	//  len2 += ft_printf("Hex (lower): [%x]\n", u);
	//  len2 += ft_printf("Hex (upper): [%X]\n", u);
	//   ВАЖНО: Ваша реализация в ft_printf.c не обрабатывает спецификатор %p.
	//   Вам нужно будет его добавить.
	// len2 += ft_printf("Pointer: [%p]\n", p);
	//len2 += ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	// len2 += ft_printf("Percent: [%%]\n");
	ft_printf("Total length: %d\n", len2);
	return (0);
}*/
