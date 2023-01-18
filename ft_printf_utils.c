/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:57:12 by fserpe            #+#    #+#             */
/*   Updated: 2023/01/18 13:56:39 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_pf(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (i < (int)ft_strlen(s))
	{
		write(1, &s[i], 1);
		++i;
	}
	return (i);
}

int	putnbr_base_pf(int nb, char *base)
{
	int	i;

	i = 0;
	if (nb < -2147483647)
		return (ft_putstr_pf("-2147483648"));
	if (nb < 0)
	{
		i += ft_putchar('-');
		nb *= -1;
		i += putnbr_base_pf(nb, base);
	}
	else if (nb < (int)ft_strlen(base))
		i += ft_putchar(base[nb]);
	else
	{
		i += putnbr_base_pf(nb / ft_strlen(base), base);
		i += putnbr_base_pf(nb % ft_strlen(base), base);
	}
	return (i);
}

unsigned int	unsigned_putnbr_base_pf(unsigned int nb, char *base)
{
	unsigned int	i;

	i = 0;
	if (nb < ((unsigned int)ft_strlen(base)))
		i += ft_putchar(base[nb]);
	else
	{
		i += unsigned_putnbr_base_pf(nb / ft_strlen(base), base);
		i += unsigned_putnbr_base_pf(nb % ft_strlen(base), base);
	}
	return (i);
}
