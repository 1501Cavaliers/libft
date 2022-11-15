/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:01:16 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/15 16:07:04 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	char	*tmp;
	tmp = (char *)content;
	tmp = "0";
}

void	*f(void *content)
{
	char	*tmp;

	tmp = (char *)content;
	tmp = "bite";
	return ((void *)tmp);
}

void	print_list(t_list *c)
{
	while (c != NULL)
	{
		printf("%s ", (char *)c->content);
		c = c->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list *l0 = NULL;
	t_list *l1 = NULL;
	t_list *l2 = NULL;
	t_list *l3 = NULL;
	t_list *l4 = NULL;
	t_list *new = NULL;

	l1 = (t_list *)malloc(sizeof(t_list));
	l2 = (t_list *)malloc(sizeof(t_list));
	l3 = (t_list *)malloc(sizeof(t_list));
	l4 = (t_list *)malloc(sizeof(t_list));

	l0 = ft_lstnew("l0");
	l1->content = (char *)"l1";
	l1->next = l2;
	l2->content = (char *)"l2";
	l2->next = l3;
	l3->content = (char *)"l3";
	l3->next = NULL;
	l4->content = (char *)"l4";
	l4->next = NULL;

	ft_lstadd_front(&l1, l0);
	ft_lstadd_back(&l0, l4);
	print_list(l0);
	printf("size : %d\n", ft_lstsize(l0));
	new = ft_lstmap(l0, f, del);
	print_list(new);
	print_list(l0);
	ft_lstclear(&new, del);
	ft_lstclear(&l0, del);
	// ft_lstiter(l0, f);
	// print_list(l0);
	// ft_lstclear(&ft_lstmap(l0, f, del), del);
	return (0);
}
