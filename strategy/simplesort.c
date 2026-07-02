#include "libft.h"
#include "push_swap.h"

t_stack	*sort_three(t_stack *stack)
{
	int	top;
	int	mid;
	int	bot;

	if (stack->top != 3)
		return (stack);
	top = stack->arr[2];
	mid = stack->arr[1];
	bot = stack->arr[0];
	if (top > mid && mid > bot)
	{
		sa(stack);
		rra(stack);
	}
	else if (top > bot && bot > mid)
	{
		ra(stack);
	}
	else if (mid > top && top > bot)
	{
		rra(stack);
	}
	else if (mid > bot && bot > top)
	{
		sa(stack);
		ra(stack);
	}
	else if (bot > top && top > mid)
	{
		sa(stack);
	}
	return (stack);
}

void selection_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	min_idx;
	int	j;
	int	min_el;
	int index;

	while (stack_a->top > 1)
	{
		min_idx = 0;
		j = 1;
		while (j < stack_a->top)
		{
			if (stack_a->arr[j] < stack_a->arr[min_idx])
				min_idx = j;
			j++;
		}
		min_el = stack_a->arr[min_idx];
		index = min_idx;
		while (index < stack_a->top - 1)
		{
			if (index < (stack_a->top) / 2)
			{
					rra(stack_a);
			}
			else
			{
				ra(stack_a);
			}
			index = indexOf(stack_a, min_el);
		}
		pb(stack_a, stack_b);
	}
	while (stack_b->top > 0)
		pa(stack_a, stack_b);
}
