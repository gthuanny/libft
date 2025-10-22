/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:53:14 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:15:16 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocate memory for an array of count objects of size bytes
each and initialize all bytes to zero.
Returns pointer or NULL on failure.*/

#include "libft.h"

//nmemb = number of elements you want in the array.
//size = size of each element, in bytes.
//bytes = total of memory that will be allocated
//(the total size of the array in bytes)
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	bytes;
	char	*str;

	i = 0;
	bytes = nmemb * size;
	str = malloc(bytes);
	if (str == 0)
		return (NULL);
	while (i < bytes)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

int main(void) 
{

    char *str = (char *)ft_calloc(2, sizeof(char));
    if (str == NULL) 
	{
        return (1); 
    }
    strcpy(str, "hi");
    printf("%s\n", str);
    free(str);
    return (0);
}*/
