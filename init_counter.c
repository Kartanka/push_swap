#include "push_swap.h"

t_counter	*init_counter(void)
{
	t_counter	*counter;

	counter = (t_counter *)malloc(sizeof(t_counter));
	if (!counter)
		return (NULL);
	counter->pa = 0;
	counter->pb = 0;
	counter->sa = 0;
	counter->sb = 0;
	counter->ss = 0;
	counter->ra = 0;
	counter->rb = 0;
	counter->rr = 0;
	counter->rra = 0;
	counter->rrb = 0;
	counter->rrr = 0;
	return (counter);
}
