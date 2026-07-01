#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	*arr;
	int	top;
	int	capacity;
}		t_stack;

typedef struct s_config
{
	char *flag;
	int index_flag;
	int	bench;
	int	count_flags;
}		t_config;

t_stack	*init_stack(int capacity);
void	sa(t_stack *stack_a);
t_stack *push_swap (char *flag, int is_bench, t_stack *stack);
float	compute_disorder(t_stack *stack_a);
int	validate_input(int argc, char **argv, t_config *flag);
int		check_duplication(t_stack *stack);
long	ft_atol(const char *str);
int		count_flag(int argc, char **argv);
char *is_flag(char *argv);
void fill_stack(t_stack *stack, int argc, char **argv);
int	ft_strcmp(char *s1, char *s2);
int is_bench(char *argv);
t_config *parse_config(int argc, char **argv);
void	rra(t_stack *stack_a);
t_stack *sort_three(t_stack *stack);
void	ra(t_stack *stack_a);
#endif