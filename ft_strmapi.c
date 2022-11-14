/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:15:39 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/12 15:37:50 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*arr;
	int		i;
	int		len;

	len = ft_strlen(s);
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (0);
	i = 0;
	while (i < len)
	{
		arr[i] = f(i, s[i]);
		++i;
	}
	arr[i] = 0;
	return (arr);
}
