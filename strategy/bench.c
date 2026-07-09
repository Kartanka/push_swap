#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

void	description(char *flag, float disorder)
{
	char	*algorithm;

	if (disorder < 0.2)
		algorithm = "O(n²)";
	else if (disorder >= 0.2 && disorder < 0.5)
		algorithm = "O(n√n)";
	else
		algorithm = "O(n·log n)";
	if (!flag || ft_strcmp(flag, "--adaptive") == 0)
	{
		ft_printf("Adaptive / %s", algorithm);
	}
	else if (ft_strcmp(flag, "--simple") == 0)
		ft_printf("Simple / %s", algorithm);
	else if (ft_strcmp(flag, "--medium") == 0)
		ft_printf("Medium / %s", algorithm);
	else if (ft_strcmp(flag, "--complex") == 0)
		ft_printf("Complex / %s", algorithm);
}

void	bench_mark(float disorder, t_counter *counter, char *flag)
{
	ft_printf("[bench] disorder: %f%%\n", disorder);
	ft_printf("[bench] strategy: ");
	description(flag, disorder);
	write(1, "\n", 1);
	ft_printf("[bench] total_ops: %d\n", counter->pa + counter->pb + counter->sa
		+ counter->sb + counter->ss + counter->ra + counter->rb + counter->rr
		+ counter->rra + counter->rrb + counter->rrr);
	ft_printf("[bench] pa: %d pb: %d sa: %d sb: %d ss: %d ra: %d\n",
		(int)counter->pa, (int)counter->pb, (int)counter->sa, (int)counter->sb,
		(int)counter->ss, (int)counter->ra);
	ft_printf("[bench] rb: %d rr: %d rra: %d rrb: %d rrr: %d\n",
		(int)counter->rb, (int)counter->rr, (int)counter->rra,
		(int)counter->rrb, (int)counter->rrr);
}
