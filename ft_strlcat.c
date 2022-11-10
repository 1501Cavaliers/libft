/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:32:07 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/09 13:11:50 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (dst[len])
		++len;
	i = 0;
	while (i < size - len - 1)
	{
		dst[len + i] = src[i];
		++i;
	}
	dst[len + i] = 0;
	while (src[i])
		++i;
	return (len + i);
}
