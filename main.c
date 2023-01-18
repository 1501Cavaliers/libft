/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:06:24 by fserpe            #+#    #+#             */
/*   Updated: 2023/01/18 14:26:58 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	fd;
	char	*str;

	fd = open("txt", O_RDONLY);

	str = get_next_line(fd);
	ft_printf("l1 : %s", str);
	free(str);
	str = get_next_line(fd);
	ft_printf("l2 : %s", str);
	free(str);
	str = get_next_line(fd);
	ft_printf("l3 : %s", str);
	free(str);
	str = get_next_line(fd);
	ft_printf("l4 : %s", str);
	free(str);
	str = get_next_line(fd);
	ft_printf("l5 : %s", str);
	free(str);
	str = get_next_line(fd);
	ft_printf("l6 : %s", str);
	free(str);

	close(fd);
}