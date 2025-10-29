/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:40:48 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/28 16:41:33 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Allocate and return a string representing integer n
 in base 10. Returns NULL on allocation failure.*/
#include "libft.h"

static unsigned int	numlength(int nb)
{
	unsigned int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	length;
	long			num;
	char			*result;

	num = n;
	length = numlength(num);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	if (num == 0)
		result[0] = '0';
	result[length] = '\0';
	while (num != 0)
	{
		result[length - 1] = (num % 10) + '0';
		num = num / 10;
		length--;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    char *result;

    result = ft_itoa(0);
    printf("nr: %d, result: %s\n", 0, result);
    free(result);

    result = ft_itoa(-2147483647);
    printf("nr: %d, result: %s\n", -2147483647, result);
    free(result);

    result = ft_itoa(467856);
    printf("nr: %d, result: %s\n", 467856, result);
    free(result);

    result = ft_itoa(-42);
    printf("nr: %d, result: %s\n", -42, result);
    free(result);

    return (0);
}
*/
