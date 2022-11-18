/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:47:37 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/17 19:30:12 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*arr;

	i = 0;
	if (c > 127)
		return ((char *)s);
	arr = (char *)s;
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
