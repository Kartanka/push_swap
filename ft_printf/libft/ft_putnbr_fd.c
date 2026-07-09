/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:53:58 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/26 13:00:39 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

static int	check_int(int nb, int fd, int count)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		count = 11;
	}
	if (nb == 2147483647)
	{
		write(fd, "2147483647", 10);
		count = 10;
	}
	return (count);
}

int	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int count;

	count = 0;
	count = check_int(n, fd, count);
	if ( count!= 0)
	{
		return (count);
	}
	else if (n < 0)
	{
		n = n * (-1);
		write(fd, "-", 1);
		count++;
	}
	if (n > 9)
	{
		count += ft_putnbr_fd((n / 10), fd);
		c = n % 10 + '0';
		write(fd, &c, 1);
		count++;
	}
	else
	{
		c = n + '0';
		write(fd, &c, 1);
		count++;
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