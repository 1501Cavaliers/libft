/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:10:26 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/21 16:12:24 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_rev_char_tab(char *arr, int size)
{
	int		i;
	char	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
		++i;
	}
	return (arr);
}

static char	*ft_fill_arr(char *arr, int n, int len, int s)
{
	int	i;

	i = 0;
	arr[i] = n % 10 + 48;
	++i;
	while (n >= 10)
	{
		n = n / 10;
		arr[i] = n % 10 + 48;
		++i;
	}
	if (s == 1)
	{
		arr[i] = '-';
		++i;
		++len;
	}
	arr[i] = 0;
	ft_rev_char_tab(arr, len);
	return (arr);
}

static int	ft_len(int n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}	
	return (i);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		s;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		s = 1;
		n *= -1;
	}
	else
		s = 0;
	len = ft_len(n);
	arr = malloc(sizeof(char) * (len + s + 1));
	if (!arr)
		return (0);
	ft_fill_arr(arr, n, len, s);
	return (arr);
}
