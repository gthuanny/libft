/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:03:34 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 15:55:28 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_countwords(char const *s, char c)
{
	char separator;
	size_t count;
	int i;
	int j; 

	separator = c
	count = 0;
	i = 0; 
	j = 0; 

	while (s[i])
	{
		if(s[i] != separator && j == 0)
		{
			j = 1;
			count++;
		}
		else if(s[i] = separator)
			j = 0;
		i++;
	}
	return (count);
}

char	**fill_array(char **result )//PAREI AQUI 

char	**ft_split(char const *s, char c)
{
	size_t len_string; 
	char **result; 

	if( s == NULL)
	{
		return (NULL);
	}
	len_string = ft_countwords (s, c); 
	result = malloc(sizeof(char*) * (len_string + 1));
	if(result == NULL) 
	{
		return(NULL);
	}
	if(len_string > 0 )
	{
		result = fill_array(result, c, s, len_string);
	}
	return (result);
}
