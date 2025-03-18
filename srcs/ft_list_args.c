/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_income.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:58:22 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/14 16:58:22 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Arguments are checked by other checker functions
// and while arguments are checked and valid, we add
// them into stack one by one with while loop.
// Atoi takes the number and turn it into an integer
// value in order to make math operations.
// With ft_stack_new, we create a new node for the 
// current argument without linking it to list.
// We make linking stage in ft_add_back call.

void    list_args(char **av, t_stack **stack_a)
{
    long    i;

    i = 1;
    while (av[i] != NULL)
    {
        ft_add_back(stack_a, ft_stack_new(ft_atoi2(av[i])));
        i++;
    }
}