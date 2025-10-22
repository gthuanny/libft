/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:13:05 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:13:54 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcmp() function compares the first n bytes (each interpreted as
unsigned char) of the memory areas s1 and s2.
The memcmp() function returns an integer  less  than,  equal  to,  or
greater  than zero if the first n bytes of s1 is found, respectively,
to be less than, to match, or be greater than the first  n  bytes  of s2.
ompare the first n bytes of s1 and s2;
return <0, 0, or >0 if s1 is less than, equal to, or greater than s2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	const void *s = "ac";
	const void *d = "abc";
	printf("%d\n", ft_memcmp(s, d, 0));
}
*/
