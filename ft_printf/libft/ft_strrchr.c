/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:56:06 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/13 22:56:07 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_char;

	c_char = (char)c;
	i = ft_strlen(s);
	if (c_char == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == c_char)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*s = "helloy dear friend";
	char		c;
	char		*result;

	c = 'e';
	result = ft_strrchr(s, c);
	printf("%s\n", result);
	printf("Begin: %p\n", (void *)s);
	printf("ptr:  %p\n", (void *)result);
	printf("Difference: %ld\n", result - s);
	return (0);
}
    */
