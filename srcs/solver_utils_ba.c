/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:38:17 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/17 15:38:17 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Difference between this file and solver_utils_ab.c :
// The other file contains calculations for insertions from a to b.
// This file contains calculations for insertions from b to a.


// This function calculates the required amount of rotation
// Calculations for ra+rb case
int     ft_case_ra_rb_a(t_stack *a, t_stack *b, int c)
{
    int     i;

    i = ft_find_place_a(a, c);
    if (i < ft_find_index(b, c))
        i = ft_find_index(b, c);
    return (i);
}

// This function calculates the required amount of rotation
// Calculations for rra+rrb case.
int     ft_case_rra_rrb_a(t_stack *a, t_stack *b, int c)
{
    int     i;

    i = 0;
    if (ft_find_place_a(a, c))
        i = ft_lstsize(a) - ft_find_place_a(a, c);
    if ((i < (ft_lstsize(b) - ft_find_index(b, c))) && ft_find_index(b, c))
        i = ft_lstsize(b) - ft_find_index(b, c);
    return (i);
}

// This function calculates the required amount of rotation
// Calculations for ra+rrb case.
int     ft_case_ra_rrb_a(t_stack *a, t_stack *b, int c)
{
    int     i;

    i = 0;
    if (ft_find_index(b, c))
        i = ft_lstsize(b) - ft_find_index(b, c);
    i = ft_find_place_a(a, c) + i;
    return (i);
}

// This function calculates the required amount of rotation.
// Calculations for rra+rb case.
int     ft_case_rra_rb_a(t_stack *a, t_stack *b, int c)
{
    int     i;

    i = 0;
    if (ft_find_place_a(a, c))
        i = ft_lstsize(a) - ft_find_place_a(a, c);
    i = ft_find_index(b, c) + i;
    return (i);
}