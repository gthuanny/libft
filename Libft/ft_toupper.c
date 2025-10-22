/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:58:24 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:02:57 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If c is a lowercase letter, returns its uppercase equivalent;
otherwise returns c unchanged.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int main(void)
{
    char str[] = "teste";
	int i = 0;
	while (str[i])
	{
	printf("%c", ft_toupper(str[i]));
	    i++;
	}
	printf("\n");
	return 0;
}
*/
