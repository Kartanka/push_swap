/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:28:02 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/13 22:46:53 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = 'v';
	printf("is_numeric = %d\n", ft_isalnum(c));
	printf("is_numeric = %d", isalnum(c));
	// y = is_alpha + '0';
	// write(1, &y, 1);
	return (0);
}
*/