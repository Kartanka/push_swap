/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:22:39 by olkonuro          #+#    #+#             */
/*   Updated: 2026/07/13 10:23:17 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <limits.h>

int	check_duplication(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->top - 1)
	{
		j = i + 1;
		while (j < stack->top)
		{
			if (stack->arr[i] == stack->arr[j])
			{
				write(1, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	validate_input(int argc, char **argv, t_config *flag)
{
	int		i;
	int		j;
	long	num;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-' && ((is_flag(argv[i]) && flag->index_flag == i)
				|| (flag->bench == 1)))
			i++;
		else
		{
			j++;
			while (argv[i][j])
			{
				if (!ft_isdigit(argv[i][j]))
				{
					write(1, "Error\n", 6);
					return (1);
				}
				j++;
			}
			num = ft_atol(argv[i]);
			if (num > INT_MAX || num < INT_MIN)
			{
				write(1, "Error\n", 6);
				return (1);
			}
			i++;
		}
	}
	if (count_flag(argc, argv) > 2)
	{
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}
