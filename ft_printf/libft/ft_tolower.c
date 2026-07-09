/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:56:28 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/13 22:56:31 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = 'a' + (c - 'A');
	}
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = '1';
	printf("is_numeric = %d\n", ft_tolower(c));
	printf("is_numeric = %d", tolower(c));
	// y = is_alpha + '0';
	// write(1, &y, 1);
	return (0);
}
*/