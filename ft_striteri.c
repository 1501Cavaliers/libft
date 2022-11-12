/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:45:18 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/12 14:55:52 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void(*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (i < (unsigned int)ft_strlen(s))
	{
		f(i, s);
		++i;
	}
}
