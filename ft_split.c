/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:00:17 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/11 16:05:07 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	fill_splinter(char *str, const char *s, char c, int i)
{
	while (s[i] == c)
		++i;
	while (s[i] != c)
	{
		*str = s[i];
		++i;
		++str;
	}
	*str = 0;
	return (i);
}

int	word_len(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i])
	{
		while (s[i] == c)
			++i;
		while (s[i] != c)
		{
			++len;
			++i;
		}
		if ((s[i] == c && s[i + 1] != c && i != 0) || s[i + 1] == 0)
			return (len);
	}
	return (len);
}

int	word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c && i != 0) || s[i + 1] == 0)
		{
			++count;
			++i;
		}
		else
			++i;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int	word;
	char **splinter;
	int	r;
	int	i;

	i = 0;
	if (*s == 0)
		return (0);
	word = word_count(s, c);
	splinter = malloc(sizeof(char *)* (word + 1));
	if (!splinter)
		return (0);
	r = 0;
	while (r < word)
	{
		splinter[r] = malloc(sizeof(char) * (word_len(s, c, i) + 1));
		if (!splinter[r])
			return (0);
		i = fill_splinter(splinter[r], s, c, i);
		++r;
	}
	splinter[r] = 0;
	return (splinter);
}