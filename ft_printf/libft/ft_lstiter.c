/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:49:00 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 12:07:08 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print_list(t_list *head)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		printf("Узел %d: \"%s\"\n", i, (char *)head->content);
		head = head->next;
		i++;
	}
	if (i == 0)
		printf("Список пуст.\n");
}
void	f_content_string(void *content)
{
	char	*s;

	if (content)
	{
		printf("%s", "Done");
		s = (char *)content;
		if (s != NULL && s[0] != '\0')
			s[0] = 'K';
	}
}
int	main(void)
{
	t_list	*node;
	char	*my_content;

	node = NULL;
	my_content = strdup("Hello");
	if (!my_content)
		return (1);
	node = ft_lstnew(my_content);
	ft_lstadd_back(&node, ft_lstnew(strdup("one")));
	ft_lstadd_back(&node, ft_lstnew(strdup("two")));
	ft_lstadd_back(&node, ft_lstnew(strdup("tree")));
	printf("Список до очистки:\n");
	print_list(node);
	ft_lstiter(node, f_content_string);
	printf("\nСписок после очистки:\n");
	print_list(node);
	free(node);
	return (0);
}
	*/