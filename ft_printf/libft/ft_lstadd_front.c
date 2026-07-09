/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:47:56 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 10:45:12 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (!lst || !new)
		return ;
	*lst = new;
	new->next = head;
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

int	main(void)
{
	t_list	*node1;
	t_list	*node2;

	t_list *head = NULL;
	printf("--- Case 1. Empty list ---\n");
	printf("Before:\n");
	print_list(head);
	node1 = ft_lstnew("World");
	ft_lstadd_front(&head, node1);
	printf("\nAfter:\n");
	print_list(head);

	printf("========================================\n\n");
	printf("--- Case 2. Add front ---\n");
	printf("Before:\n");
	print_list(head);
	node2 = ft_lstnew("Hello");
	ft_lstadd_front(&head, node2);
	printf("\nAfter\n");
	print_list(head);
	printf("========================================\n");
	free(node1);
	free(node2);
	return (0);
}
*/
