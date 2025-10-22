/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:13:40 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 10:56:58 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns non-zero if c is alphabetic or numeric;
otherwise returns 0.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
