/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:13:39 by olkonuro          #+#    #+#             */
/*   Updated: 2026/07/13 10:14:24 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	if (!stack || stack->top < 2)
		return (1);
	i = stack->top - 1;
	while (i > 0)
	{
		if (stack->arr[i] > stack->arr[i - 1])
			return (0);
		i--;
	}
	return (1);
}

float	compute_disorder(t_stack *stack_a)
{
	int	mistakes;
	int	total_pairs;
	int	i;
	int	j;

	if (!stack_a || stack_a->top < 2)
		return (0.0f);
	if (is_sorted(stack_a))
		return (0.0f);
	mistakes = 0;
	total_pairs = 0;
	i = 0;
	while (i < stack_a->top - 1)
	{
		j = i + 1;
		while (j < stack_a->top)
		{
			total_pairs++;
			if (stack_a->arr[i] > stack_a->arr[j])
				mistakes++;
			j++;
		}
		i++;
	}
	return ((float)mistakes / (float)total_pairs);
}
