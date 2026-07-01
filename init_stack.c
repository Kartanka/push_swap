#include "push_swap.h"
#include "libft.h"

t_stack *init_stack(int capacity)
{
    t_stack *stack;

    stack = (t_stack *)malloc(sizeof(t_stack));
    if (!stack)
        return(NULL);
    stack->arr = malloc(sizeof(int) * capacity);
    if (!stack->arr)
    {
        free(stack);
        return(NULL);
    }
    stack->top = 0;
    stack->capacity = capacity;
    return(stack);
}

void fill_stack(t_stack *stack, int argc, char **argv)
{
    int i;
    int k;

	i = count_flag(argc, argv) + 1;
	k = argc - 1;
	while (k >= i)
	{
		stack->arr[stack->top] = ft_atoi(argv[k]);
		stack->top++;
		k--;
	}
}