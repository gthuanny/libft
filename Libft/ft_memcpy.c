/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:00:29 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:08:53 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copy n bytes from src to dst.
Behavior undefined if source and destination overlap. Returns dst.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dst;
	char			*source;

	i = 0;
	dst = (char *)dest;
	source = (char *)src;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    const char src[] = "it is the function memcpy";

    char *dst = malloc(strlen(src) + 1);
    if (dst == NULL)
    {
        printf("error");
        return 1;
    }

    ft_memcpy(dst, src, strlen(src) + 1);

    printf("source:  %s\n", src);
    printf("dest:    %s\n", dst);


    free(dst);

    return 0;
}*/
