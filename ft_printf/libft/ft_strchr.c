/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:54:40 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/21 00:00:35 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_char;

	c_char = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c_char)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c_char == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*s = "helloy dear friend";
	char		c;
	char		*result;

	c = '\0';
	result = ft_strchr(s, c);
	printf("Begin: %p\n", (void *)s);
	printf("ptr:  %p\n", (void *)result);
	printf("Difference: %ld\n", result - s);
	return (0);
}
*/