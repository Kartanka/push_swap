/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:32:41 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/13 22:53:02 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	k;
	unsigned char	*d;
	int				i;

	k = (unsigned char)c;
	d = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (d[i] == k)
			return (&d[i]);
		else
		{
			n--;
			i++;
		}
	}
	return (NULL);
}
/*
int main ()
{
	char	*s;
	char	c;

	s = "Hello world!";
	c = 'z';
	printf ("%s\n", (unsigned char*)ft_memchr(s, c, 20));
	printf ("%s\n", (unsigned char*)memchr(s, c, 20));
	return (0);
}
*/