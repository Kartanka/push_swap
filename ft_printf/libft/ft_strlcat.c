/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:55:27 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/13 22:55:28 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	while (src[k] != '\0')
		k++;
	if (dstsize == 0)
		return (dstsize + k);
	if (i >= dstsize)
		return (dstsize + k);
	while (src[j] != '\0' && j < dstsize - i - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + k);
}
/*
int	main(void)
{
    char s[6] = "Hello";
    char *c = "wor";
    size_t size = 4;
    size_t x = ft_strlcat(s, c, size);
   size_t y = strlcat(s, c, size);
    printf("My:%zu\n", x);
    printf("Orj:%zu\n", y);
    return(0);
}
*/