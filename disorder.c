#include "push_swap.h"
#include "libft.h"

float compute_disorder(t_stack *stack_a)
{
    int mistakes;
    int total_pairs;
    int i;
    int j;

    if (!stack_a || stack_a->top < 2)
        return (0.0f);

    mistakes = 0;
    total_pairs = 0;
    i = stack_a->top - 1;
    while (i > 0)
    {
        j = i - 1;
        while (j >= 0)
        {
            total_pairs++;
            if (stack_a->arr[i] > stack_a->arr[j])
            {
                mistakes++;
            }
            j--;
        }
        i--;
    }
    return ((float)mistakes / (float)total_pairs);
}