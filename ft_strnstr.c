/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:20:49 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/09 17:26:35 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	l = 0;
	if (!little)
		return ((char *)big);
	if (!big)
		return (0);
	while (big[b] && b + l < len - 1)
	{
		l = 0;
		while (big[b + l] == little[l] && b + l < len - 1)
		{
			++l;
			if (l == ft_strlen(little))
				return ((char *)&big[b]);
		}
		++b;
	}
	return (0);
}
