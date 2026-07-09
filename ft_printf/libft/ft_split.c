/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:54:32 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/14 21:05:37 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_word(char const *s, char c)
{
	int	count;
	int	word;
	int	i;

	count = 0;
	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

static void	free_array(char **array, int i)
{
	while (i >= 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
}

static char	*fill_array(char const *s, int start, char c)
{
	int		k;
	int		end;
	int		len;
	char	*array;

	end = start;
	while (s[end] != '\0' && s[end] != c)
		end++;
	len = end - start;
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (array);
	k = 0;
	while (k < len)
	{
		array[k] = s[start];
		start++;
		k++;
	}
	array[k] = '\0';
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	char	**result;

	result = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count_word(s, c) && s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		result[j] = fill_array(s, i, c);
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (!result[j])
			free_array(result, j);
		j++;
		i++;
	}
	result[j] = NULL;
	return (result);
}
