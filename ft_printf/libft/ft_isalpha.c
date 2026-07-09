/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:22:10 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/13 22:46:53 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = '0';
	printf("is_numeric = %d\n", ft_isalpha(c));
	printf("is_numeric = %d", isalpha(c));
	// y = is_alpha + '0';
	// write(1, &y, 1);
	return (0);
}
*/