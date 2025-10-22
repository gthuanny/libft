/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:12:01 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:39:58 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compare up to n characters of s1 and s2;
return <0, 0, or >0 depending on lexicographic order*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i >= n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int main(void)
{
    char s1[100] = "teste";
    char s2[] = "test";
    int y = ft_strncmp(s1, s2, 5);
    printf("%i\n", y);
}
*/
