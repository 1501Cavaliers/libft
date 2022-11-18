/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:15:53 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/17 19:29:45 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size <= 0)
		return (ft_strlen(src));
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
