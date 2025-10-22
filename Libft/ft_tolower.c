/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:00:33 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:02:17 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If c is an uppercase letter, returns its lowercase equivalent;
otherwise returns c unchanged.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "TESTE";
	int i = 0;
	while (str[i])
	{
	printf("%c", ft_tolower(str[i]));
	    i++;
	}
	printf("\n");
	return 0;
}
*/
