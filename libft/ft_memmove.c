/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:18:18 by cldavid           #+#    #+#             */
/*   Updated: 2025/03/13 17:23:59 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i++;
		}
	}
	return (dst);
}
