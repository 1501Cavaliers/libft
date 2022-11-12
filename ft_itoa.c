/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:10:26 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/11 18:15:27 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_char_tab(char *arr, int size)
{
	int	i;
	char temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
		++i;
	}
	printf("in tab: %s\n", arr);
}

void	ft_fill_arr(char *arr, int n, int len, int s)
{
	int	i;

	i = 0;
	arr[i] = n % 10 + 48;
	++i;
	while (n > 10)
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
}

int	ft_len(int n)
{
	int	x;
	int len;

	x = n;
	len = 0;
	while (x > 0)
	{
		x /= 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		s;
	int		len;

	if (n < 0)
	{
		s = 1;
		n *= -1;
	}
	len = ft_len(n);
	arr = malloc(sizeof(char) * (len + s));
	if (!arr)
		return (0);
	ft_fill_arr(arr, n, len, s);
	return (arr);
}
