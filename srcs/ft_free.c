/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:56:41 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/14 18:56:41 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function frees the stack in argument
void    ft_free(t_stack **lst)
{
    t_stack *tmp;

    if (!lst)
        return ;
    while (*lst)
    {
        tmp = (*lst)->next;
        (*lst)->nbr = 0;
        free(*lst);
        *lst = tmp;
    }
}