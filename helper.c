/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:14:39 by olkonuro          #+#    #+#             */
/*   Updated: 2026/07/13 10:16:26 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	index_of(t_stack *stack, int num)
{
	int	i;

	i = 0;
	if (stack->top == 0)
		return (-1);
	while (i < stack->top)
	{
		if (stack->arr[i] == num)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	index_ofarr(int *arr, int num, int capacity)
{
	int	i;

	i = 0;
	while (i < capacity)
	{
		if (arr[i] == num)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	round_sqrt(int n)
{
	int	i;

	i = 1;
	if (n <= 0)
		return (0);
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (i + 0.5);
}

void	simple_sort(int *arr, int n)
{
	int	min_idx;
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < n - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < n)
		{
			if (arr[j] < arr[min_idx])
				min_idx = j;
			j++;
		}
		temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
		i++;
	}
}
