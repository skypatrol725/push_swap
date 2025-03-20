/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:44:28 by cldavid           #+#    #+#             */
/*   Updated: 2024/11/14 17:48:55 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_tot;
	char	*joined;
	int		i;
	int		j;

	len_tot = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * len_tot + 1);
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return (joined);
}
// #include <stdio.h>
// int		main(int ac, char **av)
// {
// 	if (ac != 3)
// 	{
// 		printf("NULL");
// 		return (0);
// 	}
// 	printf("%s", ft_strjoin(av[1],av[2]));
// 	return (0);
// }
