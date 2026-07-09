/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:56:00 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 12:17:44 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	else
	{
		while (big[i] != '\0' && i < len)
		{
			j = 0;
			while (little[j] != '\0' && (i + j) < len && big[i + j] != '\0'
				&& big[i + j] == little[j])
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
			i++;
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	char	t[30] = "Hello";
	char	s[5] = "l";
	char	*res;
	char	*orig;

	res = ft_strnstr(t, s, 6);
	orig = strnstr(t, s, 6);
	if (res)
	{
		printf("%s\n", res);
	}
	else
		printf("%s\n", "NULL");
	printf("%s", orig);
	return (0);
}
*/
