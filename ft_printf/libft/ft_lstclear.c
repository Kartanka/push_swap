/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:48:14 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 11:03:33 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (*lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
/*
void	print_list(t_list *head)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		printf("Node %d: \"%s\"\n", i, (char *)head->content);
		head = head->next;
		i++;
	}
	if (i == 0) printf("empty.\n");
}
	
void	del_content_string(void *content)
{
	if (content)
	{
		printf("%s", "Done");
		free(content);
	}
}
int	main(void)
{
	t_list	*node;
	char	*my_content = ft_strdup("Hello world");

	node = NULL;
	node = ft_lstnew(my_content);
	ft_lstadd_back(&node, ft_lstnew(ft_strdup("First")));
	ft_lstadd_back(&node, ft_lstnew(ft_strdup("Second")));
	ft_lstadd_back(&node, ft_lstnew(ft_strdup("Third")));
	printf("Before clear:\n");
	print_list(node);
	printf("\n========================================\n");
	ft_lstclear(&node, del_content_string);
	printf("\nAfter:\n");
	print_list(node);
	return (0);
}
	*/