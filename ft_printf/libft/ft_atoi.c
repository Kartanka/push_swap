/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:46:04 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 22:49:20 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	number(const char *str, int i)
{
	int	x;

	x = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	i;
	int	count;

	i = 0;
	x = 1;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	count = i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			x *= -1;
			i++;
		}
		else
			i++;
	}
	if (i - count > 1)
		return (0);
	x *= number(str, i);
	return (x);
}
/*
int	main(void)
{
	char	y[] = "   	-1234ab567";
	int		x;
	int		z;

	x = 0;
	z = 0;
	x = ft_atoi(y);
	z = atoi(y);
	printf("%d", x);
	printf("%s", "\n");
	printf("%d", z);
	return (0);
}
*/