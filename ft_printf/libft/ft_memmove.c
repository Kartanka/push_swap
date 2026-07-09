/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:53:25 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/20 23:49:23 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	result_direction(unsigned char *result, unsigned char *ptr,
size_t len, size_t temp)
{
	if (result < ptr)
	{
		while (len > 0)
		{
			*result++ = *ptr++;
			len--;
		}
	}
	else
	{
		ptr += len - 1;
		result += len - 1;
		while (temp > 0)
		{
			*result-- = *ptr--;
			temp--;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*result;
	size_t			temp;

	temp = len;
	ptr = (unsigned char *)src;
	result = (unsigned char *)dst;
	if (len == 0 || dst == src)
		return (dst);
	result_direction(result, ptr, len, temp);
	return (dst);
}
