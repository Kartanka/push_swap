/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:51:52 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 12:09:45 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	last = lst;
	return (last);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*last_node;
	t_list	*node2;
	t_list	*node3;

	head = NULL;
	printf("---  ---\n");
	node2 = ft_lstnew("Два");
	node3 = ft_lstnew("Три");
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	last_node = ft_lstlast(head);
	free(node2);
	free(node3);
	return (0);
}
	*/