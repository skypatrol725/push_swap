/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:25:35 by cldavid           #+#    #+#             */
/*   Updated: 2024/11/22 20:16:41 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			count;
	long int	num;
	char		*dest;
	int			i;

	num = n;
	count = count_len(num);
	i = 0;
	dest = malloc(count + 1);
	if (!dest)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		dest[0] = '-';
		i++;
	}
	dest[count] = '\0';
	while (count > i)
	{
		count--;
		dest[count] = (num % 10) + '0';
		num /= 10;
	}
	return (dest);
}
// #include <stdio.h>
// int		main()
// {
// 	printf("%s",ft_itoa(-452009));
// 	return (0);
// }
