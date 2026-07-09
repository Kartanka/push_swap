/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:56:37 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 12:19:14 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = 'A' + (c - 'a');
	}
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = ',';
	printf("is_numeric = %d\n", ft_toupper(c));
	printf("is_numeric = %d", toupper(c));
	// y = is_alpha + '0';
	// write(1, &y, 1);
	return (0);
}
*/