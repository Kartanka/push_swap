/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 12:34:36 by tkartash          #+#    #+#             */
/*   Updated: 2026/07/09 14:12:37 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	sort_case_1(t_stack *stack, int top, int mid, int bot, t_counter *counter)
{
	if (top > mid && mid > bot)
	{
		sa(stack, counter);
		rra(stack, counter);
	}
	else if (top > bot && bot > mid)
		ra(stack, counter);
	else if (mid > top && top > bot)
		rra(stack, counter);
}

static void	sort_case_2(t_stack *stack, int top, int mid, int bot, t_counter *counter)
{
	if (mid > bot && bot > top)
	{
		sa(stack, counter);
		ra(stack, counter);
	}
	else if (bot > top && top > mid)
		sa(stack, counter);
}

t_stack	*sort_three(t_stack *stack, t_counter *counter)
{
	int	top;
	int	mid;
	int	bot;

	if (stack->top != 3)
		return (stack);
	top = stack->arr[2];
	mid = stack->arr[1];
	bot = stack->arr[0];
	sort_case_1(stack, top, mid, bot, counter);
	sort_case_2(stack, top, mid, bot, counter);
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
			index = indexOf(stack_a, min_el);
		}
		pb(stack_a, stack_b, counter);
	}
	while (stack_b->top > 0)
		pa(stack_a, stack_b, counter);
}
