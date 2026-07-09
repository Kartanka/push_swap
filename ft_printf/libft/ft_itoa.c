/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:47:37 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 10:10:27 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	count_digits(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	transfer(char *s, int count, long num)
{
	if (num == 0)
	{
		s[count - 1] = '0';
		return ;
	}
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		s[count - 1] = num % 10 + '0';
		num = num / 10;
		count--;
	}
	return ;
}

char	*ft_itoa(int n)
{
	int		count;
	char	*s;
	long	num;

	num = n;
	count = 0;
	count = count_digits(num);
	s = malloc(count + 1);
	if (s == NULL)
		return (NULL);
	s[count] = '\0';
	transfer(s, count, num);
	return (s);
}

/*int	main(void)
{
	int test_cases[] = {0, 123, -456, 2147483647, -2147483648, 1, -1};
	char *result;
	unsigned long i;

	i = 0;
	while (i < sizeof(test_cases) / sizeof(int))
	{
		result = ft_itoa(test_cases[i]);
		printf("Number: %d, String: %s\n", test_cases[i], result);
		free(result);
		i++;
	}
	return (0);
}*/