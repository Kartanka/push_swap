/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:18:03 by olkonuro          #+#    #+#             */
/*   Updated: 2026/07/13 10:18:04 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

t_stack	*init_stack(int capacity)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->arr = malloc(sizeof(int) * capacity);
	if (!stack->arr)
	{
		free(stack);
		return (NULL);
	}
	stack->top = 0;
	stack->capacity = capacity;
	return (stack);
}

void	fill_stack(t_stack *stack, int argc, char **argv)
{
	int	i;
	int	k;
	int	start;

	start = count_flag(argc, argv) + 1;
	i = argc - 1;
	k = start;
	while (i >= k)
	{
		stack->arr[stack->top] = ft_atoi(argv[i]);
		stack->top++;
		i--;
	}
}
