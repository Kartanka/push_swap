/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:21:33 by olkonuro          #+#    #+#             */
/*   Updated: 2026/07/13 10:32:41 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	push_swap(t_config *cfg, t_stack *stack_a, t_stack *stack_b,
		t_counter *counter)
{
	const float	disorder = compute_disorder(stack_a);

	if (!cfg->flag)
		adaptive_sort(stack_a, stack_b, counter);
	else if (ft_strcmp(cfg->flag, "--simple") == 0)
		selection_sort(stack_a, stack_b, counter);
	else if (ft_strcmp(cfg->flag, "--medium") == 0)
		medium_sort(stack_a, stack_b, counter);
	else if (ft_strcmp(cfg->flag, "--complex") == 0)
		complex_sort(stack_a, stack_b, counter);
	else
		adaptive_sort(stack_a, stack_b, counter);
	if (cfg->bench == 1)
		bench_mark(disorder, counter, cfg->flag);
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
