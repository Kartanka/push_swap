#include "push_swap.h"

void push_a (t_stack *stack_a, t_stack *stack_b)
{
    if (!stack_a || !stack_b || stack_b->top == 0)
        return;
    stack_a->arr[stack_a->top] = stack_b->arr[stack_b->top - 1];
    stack_a->top++;
    stack_b->top--;
}

void push_b (t_stack *stack_a, t_stack *stack_b)
{
    if (!stack_a || !stack_b || stack_a->top == 0)
        return;
    stack_b->arr[stack_b->top] = stack_a->arr[stack_a->top - 1];
    stack_a->top--;
    stack_b->top++;
}

void pa (t_stack *stack_a, t_stack *stack_b)
{
    push_a (stack_a, stack_b);
    write (1, "pa\n", 3);
}

void pb (t_stack *stack_a, t_stack *stack_b)
{
    push_b (stack_a, stack_b);
    write (1, "pb\n", 3);
}