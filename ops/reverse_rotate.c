/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartash <tkartash@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 18:06:29 by tkartash          #+#    #+#             */
/*   Updated: 2026/07/09 14:06:29 by tkartash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack)
		return ;
	i = 0;
	temp = stack->arr[i];
	while (i <= stack->top - 2)
	{
		stack->arr[i] = stack->arr[i + 1];
		i++;
	}
	stack->arr[i] = temp;
}

void	rra(t_stack *stack_a, t_counter *counter)
{
	rev_rotate(stack_a);
	counter->rra++;
	write (1, "rra\n", 4);
}

void	rrb(t_stack *stack_b, t_counter *counter)
{
	rev_rotate(stack_b);
	counter->rrb++;
	write (1, "rrb\n", 4);
}

void	rrr(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	counter->rrr++;
	write (1, "rrr\n", 4);
}
