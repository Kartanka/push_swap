/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 11:42:01 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/13 22:58:39 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*m1;
	unsigned char	*m2;

	m1 = (unsigned char *)s1;
	m2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (m1[i] != '\0' && m2[i] != '\0' && m1[i] == m2[i] && i < n - 1)
	{
		i++;
	}
	return (m1[i] - m2[i]);
}
/*
int	main(void)
{
	char	y1[] = "Helee";
	char	y2[] = "Hello";

	int k, kp;
	kp = strncmp(y1, y2, 10);
	printf("kp = %d", kp);
	k = ft_strncmp(y1, y2, 10);
	printf("k = %d", k);
	return(0);
}
*/