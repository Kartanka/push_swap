#include "libft.h"
#include "push_swap.h"

t_stack	*sort_three(t_stack *stack)
{
	int top;
	int mid;
	int bot;

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
