/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:52:52 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 12:14:55 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/*
int	main(void)
{
	t_list	*head;
	int		size;
	t_list	*current;
	t_list	*next;

	head = NULL;
	printf("--- size = 3 ---\n");
	ft_lstadd_front(&head, ft_lstnew("One"));
	ft_lstadd_front(&head, ft_lstnew("Two"));
	ft_lstadd_front(&head, ft_lstnew("Three"));
	size = ft_lstsize(head);
	printf("size =: %d\n", size);
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