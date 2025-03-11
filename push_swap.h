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
    long            nbr;
    long            index;
    struct s_stack  *next;
    struct s_stack  *prev;
}   t_stack;

void    ft_sa(t_stack **a, int j);
void    ft_ra(t_stack **a, int j);
void    ft_pa(t_stack **a, t_stack **b, int j);
void    ft_rra(t_stack **a, int j);
void    ft_ss(t_stack **a, t_stack **b, int j);
void    ft_rr(t_stack **a, t_stack **b, int j);

#endif