/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:31:16 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/17 16:31:16 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function calculates and decides which rotation
// combination is best to use to sort the stack.
// Of course, after rotation there is always one push
// operation left to do, and I implemented it.
// Functio,n is used during push from A to B.
int     ft_rotate_type_ab(t_stack *a, t_stack *b)
{
    int     i;
    t_stack *tmp;

    tmp = a;
    i = ft_case_rra_rrb(a, b a->nbr);
    while (tmp)
    {
        if (i > ft_case_ra_rb(a, b, tmp->nbr))
            i = ft_case_ra_rb(a, b, tmp->nbr);
        if (i > ft_case_rra_rrb(a, b, tmp->nbr))
            i = ft_case_rra_rrb(a, b, tmp->nbr);
        if (i > ft_case_ra_rrb(a, b, tmp->nbr))
            i = ft_case_ra_rrb(a, b, tmp->nbr);
        if (i > ft_case_rra_rb(a, b, tmp->nbr))
            i = ft_case_rra_rb(a, b, tmp->nbr);
        tmp = tmp->next;
    }
    return (i);
}

// This function calculates and decides which rotation
// combination is best to use to sort the stack.
// Of course, after rotation there is always one push
// operation left to do, and I implemented it.
// Functio,n is used during push from B to A.
int	    ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rra_rrb_a(a, b, b->nbr);
	while (tmp)
	{
		if (i > ft_case_ra_rb_a(a, b, tmp->nbr))
			i = ft_case_ra_rb_a(a, b, tmp->nbr);
		if (i > ft_case_rra_rrb_a(a, b, tmp->nbr))
			i = ft_case_rra_rrb_a(a, b, tmp->nbr);
		if (i > ft_case_ra_rrb_a(a, b, tmp->nbr))
			i = ft_case_ra_rrb_a(a, b, tmp->nbr);
		if (i > ft_case_rra_rb_a(a, b, tmp->nbr))
			i = ft_case_rra_rb_a(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}