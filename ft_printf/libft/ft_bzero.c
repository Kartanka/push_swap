/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:46:14 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/22 11:06:17 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (s == NULL)
		return ;
	ptr = (unsigned char *)s;
	if (n == 0)
		return ;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
/*
int	main(void)
{
	char	s[50] = "hello my friend";
	size_t	n;

	n = 4;
	printf("%s", (char *)ft_bzero(s, n));
	return (0);
}
*/
