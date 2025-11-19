/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:22:28 by gde-cast          #+#    #+#             */
/*   Updated: 2025/11/04 17:22:29 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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

	ft_lstadd_front(&lst, b);

	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);

	free(a);
	free(b);
	return (0);
}
*/