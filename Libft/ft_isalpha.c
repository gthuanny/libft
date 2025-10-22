/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:32:11 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 10:55:21 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Returns non-zero if c is an alphabetic
character (A–Z or a–z); otherwise returns 0.*/

#include "libft.h" 

int	ft_isalplha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
