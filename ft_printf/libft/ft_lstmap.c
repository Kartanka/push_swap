/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:52:09 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 12:11:06 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*new;
	t_list	*node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	node = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new = ft_lstnew(new_content);
		if (new == NULL)
		{
			del(new_content);
			ft_lstclear(&node, del);
			return (NULL);
		}
		else
		{
			ft_lstadd_back(&node, new);
		}
		lst = lst->next;
	}
	return (node);
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
	if (i == 0)
		printf("Empty.\n");
}
void	del_content_string(void *content)
{
	if (content)
	{
		printf("%s", "Done");
		free(content);
	}
}
void	*f_content_string_for_map(void *content)
{
	char	*original_str;
	char	*new_str;

	original_str = (char *)content;
	if (original_str == NULL)
		return (NULL);
	new_str = strdup(original_str);
	if (new_str == NULL)
		return (NULL);
	if (new_str[0] != '\0')
		new_str[0] = 'K';
	return (new_str);
}

int	main(void)
{
	t_list	*lst;
	char	*content;
	t_list	*new;

	content = "One";
	new = NULL;
	lst = NULL;
	lst = ft_lstnew(content);
	ft_lstadd_back(&lst, ft_lstnew(strdup("one")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("two")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("tree")));
	print_list(lst);
	printf("\nAfter:\n");
	new = ft_lstmap(lst, f_content_string_for_map, del_content_string);
	print_list(new);
	return (0);
}
	*/