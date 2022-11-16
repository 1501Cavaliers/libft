/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:20:49 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/16 16:57:58 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	l = 0;
	if (!little[l])
		return ((char *)big);
	if (!big || !len)
		return (0);
	b = 0;
	while (big[b] && b + l < len)
	{
		l = 0;
		while (big[b + l] == little[l] && b + l < len)
		{
			++l;
			if (l == ft_strlen(little))
				return ((char *)&big[b]);
		}
		++b;
	}
	return (0);
}

// int	main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";
// 	// char * empty = (char*)"";

// 	printf("%s\n", ft_strnstr(haystack, "aaabc", 5));
// }