#include "push_swap.h"
#include "libft.h"

void push_swap (char *flag, int is_bench, t_stack *stack_a, t_stack *stack_b)
{
    if (is_bench == 1)
    {
        ft_putstr_fd("--bench", 1);
    }
    if (!flag)
    {
        ft_putstr_fd("--adaptive", 1);
    }
    if (ft_strcmp(flag, "--simple") == 0)
         selection_sort(stack_a, stack_b);
    else if (ft_strcmp(flag,"--medium") == 0)
        ft_putstr_fd("--medium", 1);
    else if (ft_strcmp(flag,"--complex") == 0)
        ft_putstr_fd("--complex", 1);
    else
        ft_putstr_fd("--adaptive", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}