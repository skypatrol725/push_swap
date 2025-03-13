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

// Operations
void    ft_sa(t_stack **a, int j);
void    ft_ra(t_stack **a, int j);
void    ft_pa(t_stack **a, t_stack **b, int j);
void    ft_rra(t_stack **a, int j);
void    ft_ss(t_stack **a, t_stack **b, int j);
void    ft_rr(t_stack **a, t_stack **b, int j);


t_stack *ft_sub_process(char **argv);
t_stack *ft_process(int argc, char **argv);


// Arguments authentication
int     ft_isalpha(int c);
void    alpha_check(char **argv);
int     check_args(char **argv);
int     sign(int c);
int     digit(int c);
int     space(int c);
int     check_error(char **argv, int i, int j);

// Message d'erreur
void    ft_error(void);

#endif