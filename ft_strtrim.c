/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:39:48 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/17 19:08:01 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checksetav(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	e;

	i = 0;
	while (s1[i])
	{
		e = 0;
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				e = 1;
			j++;
		}
		if (e == 0)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_checksetar(char const *s1, char const *set, int k)
{
	int	i;
	int	j;
	int	e;

	i = (ft_strlen(s1) - 1);
	while (i > 0 && i >= k)
	{
		e = 0;
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				e = 1;
			j++;
		}
		if (e == 0)
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		len;
	int		u;

	j = 0;
	if (!s1 || !set)
		return (NULL);
	i = ft_checksetav(s1, set);
	u = ft_checksetar(s1, set, i);
	len = u - i + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i <= u)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = 0;
	return (str);
}

// int	main(void)
// {
// 	char *s = "   xxxtripouille";
// 	char *str = ft_strtrim(s, " x");
// 	printf("strlen : %ld\n", ft_strlen(s));
// 	printf("s[15] :%c\n", s[15]);
// 	printf("%s\n", s);
// 	printf("%s", str);
// 	// printf("%d\n", ft_strncmp(s, "", 1));
// 	free(str);
// }