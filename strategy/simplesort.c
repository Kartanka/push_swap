/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 12:34:36 by tkartash          #+#    #+#             */
/*   Updated: 2026/07/13 10:35:19 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	handle_sort(t_stack *s, t_counter *c, int a, int b)
{
	int	bot;

	bot = s->arr[0];
	if (a > b && b > bot)
	{
		sa(s, c);
		rra(s, c);
	}
	else if (b > a && b > bot && a < bot)
	{
		sa(s, c);
		ra(s, c);
	}
}

t_stack	*sort_three(t_stack *stack, t_counter *counter)
{
	int	a;
	int	b;
	int	c;

	if (stack->top != 3)
		return (stack);
	a = stack->arr[2];
	b = stack->arr[1];
	c = stack->arr[0];
	if (a > b && b < c && a < c)
		sa(stack, counter);
	else if (a > b && a > c)
		ra(stack, counter);
	else if (b > a && b > c && a > c)
		rra(stack, counter);
	else
		handle_sort(stack, counter, a, b);
	return (stack);
}

int	find_min_idx(t_stack *stack_a)
{
	int	min_idx;
	int	j;

	min_idx = 0;
	j = 1;
	while (j < stack_a->top)
	{
		if (stack_a->arr[j] < stack_a->arr[min_idx])
			min_idx = j;
		j++;
	}
	return (min_idx);
}

void	selection_sort(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	int	min_idx;
	int	index;
	int	j;
	int	min_el;

	while (stack_a->top > 1)
	{
		min_idx = find_min_idx(stack_a);
		min_el = stack_a->arr[min_idx];
		index = min_idx;
		while (index < stack_a->top - 1)
		{
			if (index < (stack_a->top) / 2)
				rra(stack_a, counter);
			else
				ra(stack_a, counter);
			index = index_of(stack_a, min_el);
		}
		pb(stack_a, stack_b, counter);
	}
	while (stack_b->top > 0)
		pa(stack_a, stack_b, counter);
}
