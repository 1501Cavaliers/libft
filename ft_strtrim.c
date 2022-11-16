/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:39:48 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/16 17:37:17 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_if_set(char a, const char *set)
{
	while (*set)
	{
		if (a == *set)
			return (1);
		++set;
	}
	return (0);
}

char	*fill_str(const char *s1, const char *set, char *str, size_t count)
{
	size_t	i;
	size_t	y;

	i = 0;
	while (check_if_set(s1[i], set))
		++i;
	y = 0;
	while (y < ft_strlen(s1) - count)
	{
		str[y] = s1[i + y];
		++y;
	}
	str[y] = 0;
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	count;

	i = 0;
	if (!s1[i])
		return (0);
	count = 0;
	while (check_if_set(s1[i], set))
	{
		printf("count in 1st loop : %ld\n", count);
		printf("i in 1st loop : %ld\n", i);
		++count;
		++i;
	}
	i = ft_strlen(s1) - 1;
	printf("count1 : %ld\n", count);
	while (check_if_set(s1[i], set))
	{
		++count;
		--i;
	}
	printf("count2 : %ld\n", count);
	str = malloc(sizeof(char) * (ft_strlen(s1) - count + 1));
	if (!str)
		return (0);
	str = fill_str(s1, set, str, count);
	return (str);
}

// int	main(void)
// {
// 	char *s = ft_strtrim("   xxxtripouille   xxx", " x");
// 	printf("%s\n", s);
// 	free(s);
// }