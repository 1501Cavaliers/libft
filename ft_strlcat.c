/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:32:07 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/18 15:45:39 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	j;

	k = 0;
	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	j = ft_strlen(dest) + ft_strlen(src);
	while (dest[i])
		i++;
	while (src[k] && i < size - 1)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (j);
}

// int	main(void)
// {
// 	char	dest[30];
// 	char * src = (char *)"AAAAAAAAA";
// 	ft_memset(dest, 0, 30);
// 	ft_memset(dest, '1', 10);
// 	printf("len of src : %ld\n", ft_strlen(src));
// 	printf("value of strlcat : %ld\n", ft_strlcat(dest, src, 5));
// 	printf("dest : %s\n", dest);
// }