/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:05:14 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/10 17:23:00 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s[i] || len == 0)
		return (0);
	sub = malloc(sizeof(char) * len);
	if (!sub)
		return (0);
	while (s[start + i] && i < len - 1)
	{
		sub[i] = s[start + i];
		++i;
	}
	sub[i] = 0;
	return (sub);
}
