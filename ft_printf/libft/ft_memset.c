/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:53:37 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/22 11:05:15 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	if (b == NULL)
		return (NULL);
	ptr = (unsigned char *)b;
	if (len == 0)
		return (b);
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	char	str[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore memset(): %s\n", str);
	// Fill 8 characters starting from str[13] with '.'
	memset(str + 13, 'b', 8 * sizeof(char));
	printf("After memset():  %s\n", str);
	ft_memset(str + 13, 'b', 8 * sizeof(char));
	printf("After ft_memset():  %s\n", str);
	return (0);
}
*/