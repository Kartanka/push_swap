/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:55:07 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/20 18:09:54 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*copy;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char	*original;
	char	*duplicate;

	original = "Hello world";
	duplicate = ft_strdup(original);
	if (duplicate != NULL)
	{
		printf("original:  %s\n", original);
		printf("duplicate: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("No memory\n");
	}
	return (0);
}
	*/