/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:38:47 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/09 14:58:09 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*arr;

	i = 0;
	arr = (char *)s;
	while (arr[i])
		++i;
	while (i > 0)
	{
		if (arr[i] == c)
			return (&arr[i]);
		--i;
	}
	if (arr[i] == c)
		return (&arr[i]);
	else
		return (0);
}
