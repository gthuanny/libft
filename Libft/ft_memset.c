/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:55:31 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:05:18 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Fill the first len bytes of the buffer b with the byte value c;
returns b.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*string;

	i = 0;
	string = (char *)s;
	while (i < n)
	{
		string[i] = (char)c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
int main()
{
	char str[20];

	ft_memset(str, 'A', 19);
	str[19] = '\0';

	printf("result of ft_memset: %s\n", str);

	ft_memset(str, 'c', 5);
	printf("result after ft_memset: %s\n", str);

	return 0;
}*/
