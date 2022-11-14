/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:23:30 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/14 18:47:42 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*temp1;
	t_list	*temp2;

	if (!lst)
		return (NULL);
	start = malloc(sizeof(t_list));
	start->content = f(lst->content);
	temp1 = start;
	del(lst->content);
	lst = lst->next;
	
}


t_list start
start.cont = f(lst.cont)
tmp1 = start
tmp2
lst.cont destroy
lst = lst.next
free(lst.prev)
while(tmp1)
tmp2.cont = f(lst.cont)
tmp1.next = temp2 
lst.cont destroy
lst = lst.next
free(lst.prev)
