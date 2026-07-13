/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:18:30 by olkonuro          #+#    #+#             */
/*   Updated: 2026/07/13 11:42:47 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			capacity;
	t_config	*flag;
	t_counter	*counter;

	counter = init_counter();
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
		if (stack_a)
			free(stack_a->arr);
		if (stack_b)
			free(stack_b->arr);
		free(stack_a);
		free(stack_b);
		free(flag);
		free(counter);
		return (0);
	}
	fill_stack(stack_a, argc, argv);
	if (check_duplication(stack_a) == 1)
	{
		free(stack_a->arr);
		free(stack_b->arr);
		free(stack_a);
		free(stack_b);
		free(flag);
		free(counter);
		return (0);
	}
	push_swap(flag, stack_a, stack_b, counter);
	free(stack_a->arr);
	free(stack_b->arr);
	free(stack_a);
	free(stack_b);
	free(flag);
	free(counter);
	return (0);
}
