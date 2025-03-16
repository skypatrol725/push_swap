/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:14:41 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/14 17:14:41 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Function to add a new node to the stack from back side
void    ft_add_back(t_stack **stack, t_stack *stack_new)
{
    if (!stack)
        return ;
    if (!*stack)
        *stack = stack_new;
    else
        (ft_lstlast(*stack))->next = stack_new;
}