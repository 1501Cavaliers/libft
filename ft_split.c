/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:00:17 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/20 16:51:27 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	i;
	int	word;

	count = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			word = 0;
		if (word == 0 && s[i] != c)
		{
			++count;
			word = 1;
		}
		i++;
	}
	return (count);
}

static int	ft_wordlen(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		++len;
		i++;
	}
	return (len);
}

static char	*ft_stricpy(char *dest, const char *src, char c, int i)
{
	int	y;

	y = 0;
	while (src[i] && src[i] != c)
	{
		dest[y] = src[i];
		++y;
		++i;
	}
	dest[y] = '\0';
	return (dest);
}

char	**ft_fill_tab(char **tab, const char *s, char c)
{
	int	r;
	int	i;
	int	w_len;

	r = 0;
	i = 0;
	while (r < ft_wordcount(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		w_len = ft_wordlen(s, c, i);
		tab[r] = malloc(sizeof(char) * (w_len + 1));
		if (!tab[r])
			return (NULL);
		tab[r] = ft_stricpy(tab[r], s, c, i);
		i += w_len;
		r++;
	}
	tab[r] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!tab)
		return (NULL);
	tab = ft_fill_tab(tab, s, c);
	return (tab);
}
