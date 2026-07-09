/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:56:11 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/13 22:56:12 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	if_equal(char c, char *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c != set[j])
		{
			j++;
		}
		else
			return (1);
	}
	return (0);
}

int static	find_start(char *s, char *set)
{
	int	start;

	start = 0;
	while (s[start] != '\0')
	{
		if (if_equal(s[start], set))
		{
			start++;
		}
		else
		{
			break ;
		}
	}
	return (start);
}

int static	find_end(char *s, int end, char *set, int start)
{
	while ((end > start) && (if_equal((char)s[end - 1], (char *)set)))
	{
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;
	int		k;
	int		len;

	end = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	start = find_start((char *)s1, (char *)set);
	len = ft_strlen((char *)s1);
	end = find_end((char *)s1, len, (char *)set, start);
	trim = malloc(end - start + 1);
	if (trim == NULL)
		return (NULL);
	while (start < end)
	{
		trim[k] = (char)s1[start];
		k++;
		start++;
	}
	trim[k] = '\0';
	return (trim);
}
