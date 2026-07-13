/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:19:08 by olkonuro          #+#    #+#             */
/*   Updated: 2026/07/13 10:21:05 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	count_flag(int argc, char **argv)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	while (i <= argc - 1)
	{
		if (argv[i][0] == '-' && (is_flag(argv[i]) || ft_strcmp(argv[i],
					"--bench") == 0))
		{
			i++;
			count++;
		}
		else
			return (count);
	}
	return (count);
}

char	*is_flag(char *argv)
{
	int		len;
	char	*valid_flags[4] = {"--simple", "--medium", "--complex",
		"--adaptive"};
	int		j;

	j = 0;
	len = ft_strlen(argv);
	while (j < 4)
	{
		if (ft_memcmp(argv, valid_flags[j], len) == 0)
			return (valid_flags[j]);
		j++;
	}
	return (NULL);
}

int	is_bench(char *argv)
{
	char	*bench;
	int		i;

	bench = "--bench";
	i = 0;
	if (ft_strcmp(argv, bench) == 0)
		i = 1;
	else
		i = 0;
	return (i);
}

t_config	*parse_config(int argc, char **argv)
{
	t_config	*flag;
	char		*current_flag;
	int			i;

	i = 1;
	flag = (t_config *)malloc(sizeof(t_config));
	if (!flag)
		return (NULL);
	flag->index_flag = 0;
	flag->bench = 0;
	flag->flag = NULL;
	flag->count_flags = count_flag(argc, argv);
	while (i <= flag->count_flags)
	{
		if (is_bench(argv[i]) == 1)
			flag->bench = 1;
		current_flag = is_flag(argv[i]);
		if (current_flag != NULL)
		{
			flag->index_flag = i;
			flag->flag = current_flag;
		}
		i++;
	}
	return (flag);
}
