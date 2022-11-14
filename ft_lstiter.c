/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:55:33 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/14 17:31:59 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	// t_list	*temp;

	// temp = lst;
	while(lst)
	{
		// temp = lst->next;
		f(lst->content);
		printf("new content: %s\n", (char *)lst->content);
		lst = lst->next;
	}
	// printf("%s\n", (char *)lst->content);
}