/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 15:54:08 by tkartash          #+#    #+#             */
/*   Updated: 2026/07/09 14:23:34 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	sort_ranks(t_stack *stack)
{
	int	*sorted;
	int	i;

	sorted = malloc(sizeof(int) * stack->capacity);
	ft_memcpy(sorted, stack->arr, sizeof(int) * stack->capacity);
	simpleSort(sorted, stack->capacity);
	i = 0;
	while (i < stack->capacity)
	{
		stack->arr[i] = indexOfarr(sorted, stack->arr[i], stack->capacity);
		i++;
	}
	free(sorted);
}

int	get_max_val(t_stack *stack)
{
	int	max;
	int	i;

	max = 0;
	i = 0;
	while (i < stack->capacity)
	{
		if (max < stack->arr[i])
			max = stack->arr[i];
		i++;
	}
	return (max);
}

int	get_bits(int max_idx)
{
	int	bits;

	bits = 0;
	if (max_idx == 0)
		return (0);
	while (max_idx > 0)
	{
		bits++;
		max_idx = max_idx >> 1;
	}
	return (bits);
}

void	complex_sort(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	int	i;
	int	max_idx;
	int	bits;
	int	j;

	sort_ranks(stack_a);
	max_idx = get_max_val(stack_a);
	bits = get_bits(max_idx);
	i = 0;
	while (i < bits)
	{
		j = 0;
		while (j < stack_a->capacity)
		{
			if ((stack_a->arr[stack_a->top - 1] >> i) & 1 == 1)
				ra(stack_a, counter);
			else
				pb(stack_a, stack_b, counter);
			j++;
		}
		while (stack_b->top)
			pa(stack_a, stack_b, counter);
		i++;
	}
}
