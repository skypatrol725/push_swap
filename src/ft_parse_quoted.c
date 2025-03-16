/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_quoted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:21:31 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/16 13:21:31 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function free the string which is
// the integer values in between quotes.
void    ft_freestr(char **lst)
{
    char    *to_free;

    if (!lst)
        return ;
    while (*lst)
    {
        to_free = *lst;
        lst++;
        free(to_free);
    }
    *lst = NULL;
}

// Function to parse the arguments from quoted string
// and send them to list_args function to add them into list.
// With ft_split we split numbers from spaces.
t_stack *ft_parse_quoted(char **av)
{
    t_stack *stack_a;
    char    **tmp;
    int     i;
    int     j;

    stack_a = NULL;
    i = 0;
    tmp = ft_split(av[1], 32);
    list_args(tmp, &stack_a);
    ft_freestr(tmp);
    free(tmp);
    return (stack_a);
}