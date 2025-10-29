/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:06:10 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/29 16:08:12 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Apply function f to each character of s, passing the index 
and pointer to the character (in-place modification).*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void	nextcharacter(unsigned int index, char	*c)
{
	(void)index;
	*c += 1;
}

#include <stdio.h>

int	main (void)
{
	char str[] = "teste";
    ft_striteri(str, nextcharacter);
	printf("%s", str);
	
    return (0);
}
*/
