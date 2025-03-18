/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:22:07 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/18 15:22:07 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function sort the stack if there are only
// three elements in the stack.
void    ft_sort_three(t_stack **stack_a)
{
    if (ft_min(*stack_a) == (*stack_a)->nbr)
    {
        ft_rra(stack_a, 0);
        ft_sa(stack_a, 0);
    }
    else if (ft_max(*stack_a) == (*stack_a)->nbr)
    {
        ft_ra(stack_a, 0);
        if (!ft_check_sorted(*stack_a))
            ft_sa(stack_a, 0);
    }
    else
    {
        if (ft_find_index(*stack_a, ft_max(*stack_a)) == 1)
            ft_rra(stack_a, 0);
        else
            ft_sa(stack_a, 0);
    }
}