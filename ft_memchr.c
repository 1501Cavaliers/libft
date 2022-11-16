/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:59:23 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/16 13:59:40 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s + i == (unsigned char)c)
			return ((void *)s + i);
		++i;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s = "012345";
// 	printf("%s\n", (char *)ft_memchr(s, 0, 1));	
// }