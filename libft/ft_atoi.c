/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:42:18 by cldavid           #+#    #+#             */
/*   Updated: 2024/11/27 16:22:16 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	result;

	result = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while ((nptr[i] >= 48) && (nptr[i] <= 57))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n",ft_atoi("+099"));
// 	printf("%d\n",ft_atoi("-099"));
// 	printf("%d\n",ft_atoi("-000109"));
// 	printf("%d\n",ft_atoi("982261"));
// 	printf("%d\n",ft_atoi("-997132"));
// 	return (0);
// }
