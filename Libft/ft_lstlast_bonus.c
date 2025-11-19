/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:33:25 by gde-cast          #+#    #+#             */
/*   Updated: 2025/11/06 15:33:27 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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

	a->next = b;
	b->next = NULL;
	
	t_list *lst = a;
	t_list *last = ft_lstlast(lst);

	printf("%s\n", (char *)last->content);

	free(a);
	free(b);
	return (0);
}
*/
