#include "libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		capacity;
	int		j;
    t_config *flag;

    flag = parse_config(argc, argv);
	if (argc < 2)
		return (0);
	if (validate_input(argc, argv, flag) == 1)
		return (0);
	capacity = argc - flag->count_flags - 1;
	stack_a = init_stack(capacity);
	stack_b = init_stack(capacity);
	if (!stack_a || !stack_b)
	{
		free(stack_a);
		free(stack_b);
		return (0);
	}
    fill_stack(stack_a, argc, argv);
	if (check_duplication(stack_a) == 1)
		return (0);
	stack_a = push_swap(flag->flag, flag->bench, stack_a);
	j = 0;
	while (j < stack_a->top)
	{
		ft_putnbr_fd(stack_a->arr[j], 1);
		j++;
	}
	return (0);
}
