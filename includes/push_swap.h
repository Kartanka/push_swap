/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 10:50:28 by tkartash          #+#    #+#             */
/*   Updated: 2026/07/13 10:34:40 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int		*arr;
	int		top;
	int		capacity;
}			t_stack;

typedef struct s_config
{
	char	*flag;
	int		index_flag;
	int		bench;
	int		count_flags;
}			t_config;

typedef struct t_opscount
{
	size_t	pa;
	size_t	pb;
	size_t	sa;
	size_t	sb;
	size_t	ss;
	size_t	ra;
	size_t	rb;
	size_t	rr;
	size_t	rra;
	size_t	rrb;
	size_t	rrr;
}			t_counter;

t_config	*parse_config(int argc, char **argv);
int			ft_strcmp(char *s1, char *s2);
char		*is_flag(char *argv);
int			is_bench(char *argv);
int			count_flag(int argc, char **argv);
int			validate_input(int argc, char **argv, t_config *flag);
t_stack		*init_stack(int capacity);
void		fill_stack(t_stack *stack, int argc, char **argv);
int			check_duplication(t_stack *stack);
int			is_sorted(t_stack *stack);
float		compute_disorder(t_stack *stack_a);
void		push_swap(t_config *config, t_stack *stack_a, t_stack *stack_b,
				t_counter *counter);
long		ft_atol(const char *str);
void		push_a(t_stack *stack_a, t_stack *stack_b);
void		push_b(t_stack *stack_a, t_stack *stack_b);
void		pa(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void		pb(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void		swap(t_stack *stack);
void		sa(t_stack *stack_a, t_counter *counter);
void		sb(t_stack *stack_b, t_counter *counter);
void		ss(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void		rotate(t_stack *stack);
void		ra(t_stack *stack_a, t_counter *counter);
void		rb(t_stack *stack_b, t_counter *counter);
void		rr(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void		rev_rotate(t_stack *stack);
void		rra(t_stack *stack_a, t_counter *counter);
void		rrb(t_stack *stack_b, t_counter *counter);
void		rrr(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
t_stack		*sort_three(t_stack *stack, t_counter *counter);
int			index_of(t_stack *stack, int num);
void		selection_sort(t_stack *stack_a, t_stack *stack_b,
				t_counter *counter);
int			round_sqrt(int n);
void		simple_sort(int *arr, int n);
void		medium_sort(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void		push_max(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void		push_chunks(t_stack *stack_a, t_stack *stack_b, int *sorted,
				t_counter *counter);
int			index_ofarr(int *arr, int num, int capacity);
void		complex_sort(t_stack *stack_a, t_stack *stack_b,
				t_counter *counter);
void		sort_ranks(t_stack *stack);
int			find_max_idx(t_stack *stack);
int			get_bits(int max_idx);
int			get_max_val(t_stack *stack);
void		adaptive_sort(t_stack *stack_a, t_stack *stack_b,
				t_counter *counter);
void		bench_mark(float disorder, t_counter *counter, char *flag);
t_counter	*init_counter(void);

#endif
