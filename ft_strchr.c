/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:47:37 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/09 14:57:58 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*arr;

	i = 0;
	arr = (char *)s;
	while (arr[i])
	{
		if (arr[i] == c)
			return (&arr[i]);
		++i;
	}
	if (arr[i] == c)
		return (&arr[i]);
	return (0);
}
