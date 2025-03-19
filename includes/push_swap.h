/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:18:18 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/13 17:18:18 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

// Operations
void	ft_sa(t_stack **a, int j);
void	ft_sb(t_stack **b, int j);
void	ft_ss(t_stack **a, t_stack **b, int j);
void	ft_ra(t_stack **a, int j);
void	ft_rb(t_stack **b, int j);
void	ft_rr(t_stack **a, t_stack **b, int j);
void	ft_rra(t_stack **a, int j);
void	ft_rrb(t_stack **b, int j);
void	ft_rrr(t_stack **a, t_stack **b, int j);
void	ft_rrr_sub(t_stack **b, int j);
void	ft_pa(t_stack **a, t_stack **b, int j);
void	ft_pb(t_stack **a, t_stack **b, int j);

// Operations management
int		ft_case_ra_rb(t_stack *a, t_stack *b, int c);
int		ft_case_rra_rrb(t_stack *a, t_stack *b, int c);
int		ft_case_rra_rb(t_stack *a, t_stack *b, int c);
int		ft_case_ra_rrb(t_stack *a, t_stack *b, int c);

int		ft_case_ra_rb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rra_rrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_ra_rrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rra_rb_a(t_stack *a, t_stack *b, int c);

int		ft_apply_ra_rb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rra_rrb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rra_rb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_ra_rrb(t_stack **a, t_stack **b, int c, char s);

int		ft_rotate_type_ab(t_stack *a, t_stack *b);
int		ft_rotate_type_ba(t_stack *a, t_stack *b);

int		ft_check_sorted(t_stack *stack_a);

// Sorting algo
void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_sort_b(t_stack **stack_a);
t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
void	ft_sort(t_stack **stack_a);
void	ft_sort_three(t_stack **stack_a);

// Arguments authentication
int		ft_isalpha(int c);
void	alpha_check(char **argv);
int		sign(int c);
int		digit(int c);
int		space(int c);
int		check_error(char **argv, int i, int j);
int		ft_check_dup(t_stack *a);
int		check_args(char **argv);

// Parsing
t_stack	*ft_parse_quoted(char **av);
t_stack	*ft_parse(int ac, char **av);
t_stack	*ft_sub_process(char **argv);
t_stack	*ft_process(int argc, char **argv);
int		ft_find_index(t_stack *a, int nbr);
int		ft_find_place_b(t_stack *stack_b, int nbr_push);
int		ft_find_place_a(t_stack *stack_a, int nbr_push);
int		ft_atoi2(const char *str);

// Lists management
void	list_args(char **av, t_stack **stack_a);
void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_stack_new(int content);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
int		ft_min(t_stack *a);
int		ft_max(t_stack *a);

// Memory management
void	ft_free(t_stack **lst);
void	ft_freestr(char **lst);

// Message d'erreur
void	ft_error(void);

#endif
