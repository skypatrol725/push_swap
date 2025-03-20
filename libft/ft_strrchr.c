/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:52:38 by cldavid           #+#    #+#             */
/*   Updated: 2024/11/13 22:03:15 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_oc;

	i = 0;
	last_oc = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last_oc = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (last_oc);
}
// #include <stdio.h>
// int main ()
// {
// 	printf("%s\n",ft_strrchr("tripouille",'t'));
// 	printf("%s\n",ft_strrchr("tripouille",'t'+256));
// 	return 0;
// }
