/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:13 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/09 14:57:21 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;
	char		temp[n];
	size_t		i;

	cdest = (char *)dest;
	csrc = (char *)src;
	i = 0;
	while (csrc[i])
	{
		temp[i] = csrc[i];
		++i;
	}
	i = 0;
	while (i < n)
	{
		cdest[i] = temp[i];
		++i;
	}
	return (dest);
}
