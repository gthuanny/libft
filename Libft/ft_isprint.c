/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:26:28 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 10:58:09 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns non-zero if c is a printable character (including space);
otherwise returns 0*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
