/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:47:45 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 10:32:28 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
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

int	main()
{
	t_list	*head;
	t_list	*current;
	t_list	*next;

	head = NULL;
	printf("--- Case 1. Empty list ---\n");
	printf("Before:\n");
	print_list(head);
	ft_lstadd_back(&head, ft_lstnew("First"));
	printf("\nAfter:\n");
	print_list(head);
	printf("========================================\n\n");
	printf("--- Case 2. Add back ---\n");
	printf("Before:\n");
	print_list(head);
	ft_lstadd_back(&head, ft_lstnew("Second"));
	ft_lstadd_back(&head, ft_lstnew("Third"));
	printf("\nAfter");
	print_list(head);
	printf("========================================\n");
	//Clean memory after malloc
	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	return (0);
}
	*/
