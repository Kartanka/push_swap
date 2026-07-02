#include "libft.h"
#include "push_swap.h"

int	indexOf(t_stack *stack, int num)
{
	int	i;

	i = 0;
	if (stack->top == 0)
		return (-1);
	while (i < stack->top)
	{
		if(stack->arr[i] == num)
        {
			return (i);
        }
		i++;
	}
	return (-1);
}