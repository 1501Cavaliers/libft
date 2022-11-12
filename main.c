/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:01:16 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/12 15:08:51 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(unsigned int i, char *s)
{
	s[i] += 32;
}

int	main(void)
{
	// char	s[] = "je me leve a 9 heures de l'apres minuit";
	int	i = 123456789;

	ft_putnbr_fd(i, 1);
	return (0);
}
