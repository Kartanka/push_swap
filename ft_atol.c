/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 21:40:00 by olkonuro          #+#    #+#             */
/*   Updated: 2026/06/24 23:39:10 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	number(const char *str, int i)
{
	long	x;

	x = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x);
}

long	ft_atol(const char *str)
{
	long	x;
	int		i;
	int		count;

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
