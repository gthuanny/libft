/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:43:05 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:43:29 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strdup() function returns a pointer to a new string which is a du‐
plicate of the string s.
the function duplicates a string and allocates this new string in memory
*/
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char *dup;

	dup = ft_strdup("teste");
	printf("Duplicate: %s\n", dup);
	free(dup);
}*/
