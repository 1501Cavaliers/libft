/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:46:32 by fserpe            #+#    #+#             */
/*   Updated: 2023/01/18 13:53:33 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_p(void *ptr)
{
	unsigned long	ret;
	int				i;

	ret = (unsigned long)ptr;
	i = 0;
	if (ret > 15)
		i += print_p((void *)(ret / 16));
	i += ft_putchar("0123456789abcdef"[ret % 16]);
	return (i);
}

int	handle_p(void *buf)
{
	int	i;

	i = 0;
	if (!buf)
		return (write(1, "(nil)", 5));
	else
	{
		write(1, "0x", 2);
		i += 2;
	}
	return (print_p(buf) + i);
}

int	perse_arg(const char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr_pf(va_arg(ap, char *)));
	else if (c == 'p')
		return (handle_p(va_arg(ap, void *)));
	else if (c == 'd')
		return (putnbr_base_pf(va_arg(ap, int), "0123456789"));
	else if (c == 'i')
		return (putnbr_base_pf(va_arg(ap, int), "0123456789"));
	else if (c == 'u')
		return (unsigned_putnbr_base_pf(va_arg(ap, unsigned int), "0123456789"));
	else if (c == 'x')
		return (unsigned_putnbr_base_pf(va_arg(ap, unsigned int)
				, "0123456789abcdef"));
	else if (c == 'X')
		return (unsigned_putnbr_base_pf(va_arg(ap, unsigned int)
				, "0123456789ABCDEF"));
	else if (c == '%')
		return (write(1, "%%", 1));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (!format)
		return (0);
	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += perse_arg(format[i], ap);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	return (count);
}
