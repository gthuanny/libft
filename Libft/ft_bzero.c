/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:56:47 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:07:15 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_bzero function is meant to fill a block of memory with zeros,
effectively clearing it.
set the first n bytes of s to zero.
(Equivalent to ft_memset(s, 0, n).)*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
