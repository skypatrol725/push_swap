/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:33:04 by cldavid           #+#    #+#             */
/*   Updated: 2024/11/12 18:25:33 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		nb_min;
	char	numb;

	nb_min = -2147483648;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == nb_min)
		{
			write(fd, "2147483648", 10);
			return ;
		}
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	numb = (n % 10) + '0';
	ft_putchar_fd(numb, fd);
}
