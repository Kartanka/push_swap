#include "push_swap.h"

void swap (t_stack *stack)
{
    int temp;

    temp = stack->arr[stack->top - 1];
    stack->arr[stack->top - 1] = stack->arr[stack->top - 2];
    stack->arr[stack->top - 2] = temp;
}

void sa (t_stack *stack_a)
{
    swap (stack_a);
    write (1, "sa\n", 3);
}

void sb (t_stack *stack_b)
{
    swap (stack_b);
    write (1, "sb\n", 3);
}

void ss (t_stack *stack_a, t_stack *stack_b)
{
    swap (stack_a);
    swap (stack_b);
    write (1, "ss\n", 3);
}