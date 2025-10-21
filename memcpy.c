/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:00:29 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/21 11:04:02 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
