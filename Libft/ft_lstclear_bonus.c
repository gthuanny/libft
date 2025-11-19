/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:25:15 by gde-cast          #+#    #+#             */
/*   Updated: 2025/11/04 17:25:17 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*list;

	list = *lst;
	while (list)
	{
		tmp = list->next;
		(*del)(list->content);
		free (list);
		list = tmp;
	}
	*lst = NULL;
}

/*
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *a = ft_lstnew(malloc(5));
	t_list *b = ft_lstnew(malloc(10));
	t_list *c = ft_lstnew(malloc(20));

	a->next = b;
	b->next = c;

	ft_lstclear(&a, del_content);

	printf("a = %p\n", (void *)a); // imprime NULL
}
*/