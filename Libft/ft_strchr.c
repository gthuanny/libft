/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:49:44 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:34:14 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return pointer to first occurrence of c in s,
or NULL if not found (search includes terminating null).
The strchr()function return a pointer to the  matched
character  or  NULL  if  the character is not found.  The terminating
null byte is considered part of the string, so that if c is specified
as '\0', these functions return a pointer to the terminator.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	j;

	j = (char)c;
	while (*s != '\0' && *s != j)
		s++;
	if (*s == j)
		return ((char *)s);
	else
		return (NULL);
}
/*
#include <stdio.h>
int main(void) 
{
    const char *str = "testing";
    char point = 'e';

    char *result = ft_strchr(str, point);

    if (result != NULL) 
	{
        printf("Character '%c' found in the string.\n", point);
		printf("Memmory address: %p\n", result);
	}
	else 
        printf("character '%c' not found in the string.\n", point);
    return 0;
}
*/
