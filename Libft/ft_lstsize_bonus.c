/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:29:01 by gde-cast          #+#    #+#             */
/*   Updated: 2025/11/06 15:29:04 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/*
int	main(void)
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));

	if (!a || !b || !c)
		return (1);

	a->next = b;
	a->next->next = c;
	a->next->next->next = NULL;

	printf("%d\n", ft_lstsize(c));
	free(a);
	free(b);
	free(c);
	return (0);
}
*/
