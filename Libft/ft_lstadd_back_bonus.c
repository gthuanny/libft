/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:34:50 by gde-cast          #+#    #+#             */
/*   Updated: 2025/11/06 15:34:52 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	node->next = new;
}
/*
int	main(void)
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));

	if (!a || !b)
		return (1);

	a->content = "primeiro";
	b->content = "segundo";

	a->next = NULL;
	t_list *lst = a;

	ft_lstadd_back(&lst, b);

	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);

	free(a);
	free(b);
	return (0);
}
*/
