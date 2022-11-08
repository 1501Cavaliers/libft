/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:13 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/08 13:54:08 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, int n)
{
	char	*cdest;
	char	*csrc;
	char	temp[n];

	cdest = (char *)dest;
	csrc = (char *)src;
	temp[n] = "";
	while (n-- > 0)
		*temp++ = *csrc++;
	while (*temp)
		*cdest++ = *temp++;
	return (dest);
}