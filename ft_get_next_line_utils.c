/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:40:23 by fserpe            #+#    #+#             */
/*   Updated: 2023/01/18 14:02:17 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_gnl(char *s, int c)
{
	int		i;
	char	*arr;

	i = 0;
	if (!s)
		return (NULL);
	if (c > 127)
		return (s);
	arr = s;
	while (arr[i])
	{
		if (arr[i] == c)
			return (&arr[i]);
		++i;
	}
	if (arr[i] == c)
		return (&arr[i]);
	return (0);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		y;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = 0;
	}
	str = malloc(sizeof(char) * ((int)ft_strlen(s1) + (int)ft_strlen(s2) + 1));
	if (!str)
		return (0);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	y = 0;
	while (s2[y])
		str[i++] = s2[y++];
	str[i] = 0;
	free(s1);
	return (str);
}
