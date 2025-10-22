/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:06:00 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:12:03 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copy len bytes from src to dst safely even
if memory regions overlap. Returns dst.*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*sdest;
	unsigned char	*ssrc;
	size_t			i;

	i = 0;
	sdest = (unsigned char *) dest;
	ssrc = (unsigned char *) src;
	if (sdest > ssrc)
	{
		while (i++ < n)
			sdest[n - i] = ssrc[n - i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[] = "lets test";
	
	ft_memmove(str, str + 5, 4);
	printf("\nft_memmove with overlap:\n");
	printf("dest = %s\n", str);


	char src[] = "test";
	char dest[5];

	ft_memmove(dest, src, 5);

	printf("\nft_memmove no overlap:\n");
	printf("src  = %s\n", src);
	printf("dest = %s\n", dest);

	return 0;
}
*/
