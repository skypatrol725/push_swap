/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:41:23 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/14 16:41:23 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// sa (swap a) : it swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements).

void    ft_sa(t_stack **a, int j)
{
    t_stack *tmp;

//on verifie si la pile a est vide ou si elle n'a qu'un element 
    if (!*a || !((*a)->next))
        return ;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = (*a)->next;
    (*a)->next = tmp;
    if (j == 0)
        write(1, "sa\n", 3);
}

// sb (swap b) : swap the first 2 elements at the top of stack b. 
// Do nothing if there is only one or no elements).
void	ft_sb(t_stack **b, int j)
{
	t_stack	*tmp;

	if (!*b || !((*b)->next))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "sb\n", 3);
}

// ss : sa and sb at the same time
void    ft_ss(t_stack **a, t_stack **b, int j)
{
    t_stack *tmp;

    if (!*a || !((*a)->next) || !*b || !((*b)->next))
        return ;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = (*a)->next;
    (*a)->next = tmp;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = (*b)->next;
    (*b)->next = tmp;
    if (j == 0)
        write(1, "ss\n", 3);
}