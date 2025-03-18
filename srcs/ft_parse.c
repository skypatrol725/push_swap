/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:29:37 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/16 13:29:37 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Parsing function
// 1. Checks that number of argument is valid
//
// 2. If 2 arguments --> quoted string
//
// 3. If more than 2 --> list the arguments
t_stack *ft_parse(int ac, char **av)
{
    t_stack *stack_a;

    stack_a = NULL;
    if (ac < 2)
        ft_error();
    else if (ac == 2)
        stack_a = ft_parse_quoted(av);
    else
        list_args(av, &stack_a);
    return (stack_a);
}