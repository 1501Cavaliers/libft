/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:00:35 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/15 19:34:29 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!size || !nmemb)
		return (NULL);
	if (size * nmemb > 4294967295)
		return (NULL);
	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	while (str[i] && i < nmemb)
	{
		str[i] = 0;
		++i;
	}
	return ((void *) str);
}
