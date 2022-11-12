/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:00:35 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/10 15:31:59 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!size || !nmemb)
		return (0);
	if (size * nmemb > 4294967295)
		return (0);
	str = malloc(size * nmemb);
	if (!str)
		return (0);
	while (i < nmemb)
	{
		str[i] = 0;
		++i;
	}
	return ((void *) str);
}
