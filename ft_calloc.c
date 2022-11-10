/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:00:35 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/09 17:39:34 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	int	i;

	i = 0;
	if (size * nmemb > 21474483647)
		return (0);
	str = malloc(sizeof(size) * nmemb);
	if (!str)
		return (0);
	while (str[i++])
		str[i] = 0;
	return ((void *) str);
}
