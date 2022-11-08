/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:08:05 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/08 13:49:00 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, int n)
{
	char	*cdest;
	char	*csrc;

	cdest = dest;
	csrc = src;
	while (n-- > 0)
		*cdest++ = *csrc++;
	return (dest);
}