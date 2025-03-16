/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:53:01 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/16 13:53:01 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function return the last element of the stack.
t_stack *ft_lstlast(t_stack *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

// This function return the size of the stack.
int     ft_lstsize(t_stack *lst)
{
    size_t  i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

// This function finds and returns the smallest number in the given stack.
int     ft_min(t_stack *a)
{
    int     i;

    i = a->nbr;
    while (a)
    {
        if (a->nbr < i)
            i = a->nbr;
        a = a->next;
    }
    return (i);
}

// This function finds and returns the biggest number
// in the given stack.
int ft_max(t_stack *a)
{
    int     i;

    i = a->nbr;
    while (a)
    {
        if (a->nbr > i)
            i = a->nbr;
        a = a->next;
    }
    return (i);
}