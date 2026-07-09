#include "libft.h"
#include "push_swap.h"
#include <stdio.h>

void	adaptive_sort(t_stack *stack_a, t_stack *stack_b)
{
	float d;

	d = compute_disorder(stack_a);
	if (d < 0.2)
		selection_sort(stack_a, stack_b);
	else if (d >= 0.2 && d < 0.5)
        medium_sort(stack_a, stack_b);
    else
        write(1, "complex sort\n", 12);
}