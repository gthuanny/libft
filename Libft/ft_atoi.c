/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:50:31 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/23 10:15:23 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocate and return a string representing integer n in base 10.
Returns int*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	signal;

	i = 0;
	result = 0;
	signal = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal *= -1;
		i++;
	}
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = result * 10 + (nptr[i] - '0');
			i++;
		}
	return (result * signal);
}

/*#include <stdlib> 

int main(void)
{
	const char *nptr = "123"
	
	int i = 0;
	i = ft_atoi(nptr);

	printf("d%\n",i);
}*/
