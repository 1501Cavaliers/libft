/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:01:16 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/09 17:44:43 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *s = "au claire de la lune";
	// char *dest = "claire";
	char	*str = ""; 

	str = ft_strdup(s);
	printf("%s\n", str);
	free(str);
	// ft_strnstr(s, dest, 5);
	// printf("%s\n%s\n", dest, s);	
	// ft_strlcat(dest, s, 23);
	// printf("%s\n", dest);
	return (0);
}
