/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:53:14 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/22 11:05:43 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*result;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr = (unsigned char *)src;
	result = (unsigned char *)dst;
	if (n == 0 || dst == src)
		return (dst);
	while (n > 0)
	{
		*result = *ptr;
		ptr++;
		result++;
		n--;
	}
	return (dst);
}
/*
int	main(void)
{
	char	s[50] = "hello my friend";
	char	v[50];
	size_t	n;

	n = 0;
	printf("%s\n", (char *)memcpy(v, s, n));
	printf("%s\n", (char *)ft_memcpy(v, s, n));
	return (0);
}
*/