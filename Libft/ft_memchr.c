/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:47:53 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:12:42 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Scan the first n bytes of s for byte c;
returns a pointer to the first occurrence or NULL if not found.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	i;
	unsigned char	*str;
	unsigned char	k;

	i = 0;
	str = (unsigned char *)s;
	k = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == k)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    const char str[] = "test";
    char ch = 'e';
    size_t len = ft_strlen(str);

    char *result = (char *)ft_memchr(str, ch, len);

    if (result != NULL)
	{
        printf("char '%c' found\n", ch);
		printf("memmory address: %p\n", result);
	}
    else
        printf("char '%c' not found\n", ch);

    return (0);
}
*/
