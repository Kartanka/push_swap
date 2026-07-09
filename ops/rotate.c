/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartash <tkartash@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 18:06:23 by tkartash          #+#    #+#             */
/*   Updated: 2026/07/09 14:07:47 by tkartash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack || stack->top < 2)
		return ;
	i = stack->top - 1;
	temp = stack->arr[i];
	while (i)
	{
		stack->arr[i] = stack->arr[i - 1];
		i--;
	}
	stack->arr[i] = temp;
}

void	ra(t_stack *stack_a, t_counter *counter)
{
	rotate(stack_a);
	counter->ra++;
	write (1, "ra\n", 3);
}

void	rb(t_stack *stack_b, t_counter *counter)
{
	rotate(stack_b);
	counter->rb++;
	write (1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	rotate(stack_a);
	rotate(stack_b);
	counter->rr++;
	write (1, "rr\n", 3);
}
