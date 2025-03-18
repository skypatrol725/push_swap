/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:01:14 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/18 16:01:14 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// check if an int is negative
int     sign(int c)
{
    if (c == '+' || c == '-')
        return (1);
    return (0);
}

// check if c is a digit
int     digit(int c)
{
    if ((c >= 48) && (c <= 57))
        return (1);
    return (0);
}

// check if c is a space character
int     space(int c)
{
    if (c == ' ')
        return (1);
    return (0);
}

// check if given arguments are valid
int     check_error(char **argv, int i, int j)
{
    while (argv[i])
    {
        j = 0;
        while ((argv[i][j] != '\0'))
        {
            if (sign(argv[i][j]))
            {
                j++;
                if (!digit(argv[i][j]))
                    return (false);
            }
            else if (digit(argv[i][j]))
            {
                j++;
                if (argv[i][j] == '\0')
                    break ;
                if (!digit(argv[i][j]) && !space(argv[i][j]))
                    return (false);
            }
            j++;
        }
        i++;
    }
    return (true);
}