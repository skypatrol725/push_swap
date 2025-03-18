/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:36:23 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/18 15:36:23 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
    t_stack	*a;

	a = ft_process(ac, av);
	if (!a || ft_check_dup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_check_sorted(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}