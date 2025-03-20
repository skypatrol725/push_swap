/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cldavid <cldavid@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:04:31 by cldavid           #+#    #+#             */
/*   Updated: 2024/11/14 17:15:39 by cldavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int		count;
	int		in_substr;

	count = 0;
	in_substr = 0;
	while (*s)
	{
		if (*s != c && !in_substr)
		{
			in_substr = 1;
			count++;
		}
		else if (*s == c)
			in_substr = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	word = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	ft_fill_split(char **result, const char *s, char c)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = -1;
	while (s[i])
	{
		if (s[i] != c && index < 0)
			index = i;
		else if (s[i] == c && index >= 0)
		{
			result[j++] = word_dup(s, index, i);
			index = -1;
		}
		else if (s[i + 1] == '\0' && index >= 0)
		{
			result[j++] = word_dup(s, index, i + 1);
			index = -1;
		}
		i++;
	}
	result[j] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_countwords(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ft_fill_split(result, s, c);
	return (result);
}
