/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:01:16 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/08 13:52:21 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	s[5] = {9, 1, 2, 3, 4};
	int	dest[20] = {};
	int	i = 0;

	ft_memcpy(dest ,s , 8);
	while (dest[i])
	{
		printf("%d\n", dest[i++]);
	}
	// printf("%s\n", dest);
	return (0);
}
