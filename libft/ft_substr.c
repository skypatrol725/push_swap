/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:11:47 by cldavid           #+#    #+#             */
/*   Updated: 2024/11/25 16:08:26 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if ((size_t)ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!s2)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%s",ft_substr("Bonjour le monde !", 8, 9));
// 	return (0);
// }
