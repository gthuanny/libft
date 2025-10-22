/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:30:10 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:17:20 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return the number of characters in string s
(not including terminating null byte).*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int main(void)
{
    printf("%zu\n", ft_strlen("hello world"));
}
*/
