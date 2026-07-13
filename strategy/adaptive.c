/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:10:31 by olkonuro          #+#    #+#             */
/*   Updated: 2026/07/13 10:11:20 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	adaptive_sort(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	float	d;

	if (is_sorted(stack_a))
		return ;
	if (stack_a->top <= 3)
	{
		selection_sort(stack_a, stack_b, counter);
		return ;
	}
	d = compute_disorder(stack_a);
	if (d < 0.2)
		selection_sort(stack_a, stack_b, counter);
	else if (d >= 0.2 && d < 0.5)
		medium_sort(stack_a, stack_b, counter);
	else
		complex_sort(stack_a, stack_b, counter);
}
