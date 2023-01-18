/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:00:35 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/22 14:51:09 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	str = NULL;
	i = 0;
	if (!size || !nmemb)
		return (malloc(0));
	if (size > 4294967295 / nmemb)
		return (NULL);
	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	while (i < size * nmemb)
	{
		str[i] = 0;
		++i;
	}
	return ((void *) str);
}
