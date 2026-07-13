/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 10:47:51 by tkartash          #+#    #+#             */
/*   Updated: 2026/07/13 10:36:05 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	push_chunks(t_stack *stack_a, t_stack *stack_b, int *sorted,
		t_counter *counter)
{
	int	i;
	int	chunk;
	int	total;

	chunk = round_sqrt(stack_a->capacity);
	i = 0;
	while (stack_a->top > 0)
	{
		total = i + chunk;
		if (total > stack_a->top - 1)
			total = stack_a->top - 1;
		if (stack_a->arr[stack_a->top - 1] <= sorted[i])
		{
			pb(stack_a, stack_b, counter);
			rb(stack_b, counter);
			i++;
		}
		else if (stack_a->arr[stack_a->top - 1] <= sorted[total])
		{
			pb(stack_a, stack_b, counter);
			i++;
		}
		else
			ra(stack_a, counter);
	}
}

int	find_max_idx(t_stack *stack)
{
	int	max_idx;
	int	j;

	max_idx = 0;
	j = 1;
	while (j < stack->top)
	{
		if (stack->arr[j] > stack->arr[max_idx])
			max_idx = j;
		j++;
	}
	return (max_idx);
}

void	push_max(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	int	max_idx;
	int	max_el;
	int	index;

	while (stack_b->top > 0)
	{
		max_idx = find_max_idx(stack_b);
		max_el = stack_b->arr[max_idx];
		index = max_idx;
		while (index < stack_b->top - 1)
		{
			if (index < (stack_b->top) / 2)
				rrb(stack_b, counter);
			else
				rb(stack_b, counter);
			index = index_of(stack_b, max_el);
		}
		pa(stack_a, stack_b, counter);
	}
}

void	medium_sort(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	int	*sorted;

	sorted = malloc(sizeof(int) * stack_a->capacity);
	ft_memcpy(sorted, stack_a->arr, sizeof(int) * stack_a->capacity);
	simple_sort(sorted, stack_a->capacity);
	push_chunks(stack_a, stack_b, sorted, counter);
	free(sorted);
	push_max(stack_a, stack_b, counter);
}
