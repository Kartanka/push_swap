/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:48:49 by olkonuro          #+#    #+#             */
/*   Updated: 2026/05/18 12:20:25 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del != NULL)
	{
		del(lst->content);
	}
	free(lst);
}
/*
void	del_content_string(void *content)
{
if(content)
	free(content);
}

void	del_and_print(void *content)
{
	printf(" delete: \"%s\"\n", (char *)content);
	free(content); 
}

int	main(void)
{
	char	*my_content;
	t_list	*node;

	my_content = ft_strdup("Hello world");
	if (!my_content)
		return (1);
	node = ft_lstnew(my_content);
	ft_lstdelone(node, del_and_print);
	printf("===================================================\n\n");
	ft_lstdelone(NULL, del_and_print);
	printf("===================================================\n");
	return (0);
}
*/