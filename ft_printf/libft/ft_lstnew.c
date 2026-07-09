/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:40:59 by olgakonurov       #+#    #+#             */
/*   Updated: 2026/05/18 12:12:46 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void)
{
	t_list	*node;
	char	*content;

	content = "Hello world!";
	node = ft_lstnew(content);
	if (node == NULL)
	{
		printf("No memory!\n");
		return (1);
	}
	printf("Content: %s\n", (char *)node->content);
	if (node->next == NULL)
		printf("Yes\n");
	else
		printf("error!\n");
	free(node);
	return (0);
}
	*/