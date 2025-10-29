/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:48:26 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/28 15:57:16 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Split string s into an array of strings using delimiter c.
Returns a NULL-terminated array of 
allocated strings (NULL on allocation failure).
Consecutive delimiters produce empty 
segments that are typically skipped.*/
#include "libft.h"

/*
** Counts the number of words (segments) 
in string 's' separated by delimiter 'c'.
** Consecutive delimiters are ignored.
*/
static size_t	ft_countwords(char const *s, char c)
{
	char	separator;
	size_t	count;
	int		i;
	int		j;

	separator = c;
	count = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != separator && j == 0)
		{
			j = 1;
			count++;
		}
		else if (s[i] == separator)
			j = 0;
		i++;
	}
	return (count);
}

/*
** Calculates the length of the next segment (word) in string 's'
** until the separator 'c' or the end of the string.
*/
static size_t	ft_seglen(char const *s, char separator)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != separator)
		i++;
	return (i);
}

/*
** Frees the allocated memory for 'result' in case of allocation failure
** and returns NULL.
*/
static char	**ft_free(char **result, size_t len_strings)
{
	size_t	i;

	i = 0;
	while (i < len_strings)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

/*
** Fills the allocated array 'result' with the segments (words)
** from string 's', separated by 'c'.
*/
static char	**fill_array(char **result, char separator, char const *s,
		size_t len_string)
{
	size_t	i;
	size_t	words;
	size_t	j;

	i = 0;
	words = 0;
	while (words < len_string)
	{
		j = 0;
		while (s[i] && s[i] == separator)
			i++;
		result[words] = (char *)malloc(ft_seglen(&s[i], separator) + 1);
		if (result[words] == NULL)
			return (ft_free(result, words));
		while (s[i] && s[i] != separator)
		{
			result[words][j] = s[i];
			i++;
			j++;
		}
		result[words][j] = '\0';
		words++;
	}
	result[words] = NULL;
	return (result);
}

/*
** Splits string 's' into an array of strings 
using delimiter 'c'.
** Returns a NULL-terminated array of allocated 
strings (NULL on allocation failure).
** Consecutive delimiters produce empty segments that are skipped.
*/
char	**ft_split(char const *s, char c)
{
	size_t	len_string;
	char	**result;

	if (s == NULL)
		return (NULL);
	len_string = ft_countwords(s, c);
	result = (char **)malloc(sizeof(char *) * (len_string + 1));
	if (result == NULL)
		return (NULL);
	if (len_string > 0)
	{
		result = fill_array(result, c, s, len_string);
		if (result == NULL)
			return (NULL);
	}
	else
		result[0] = NULL;
	return (result);
}

/*int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char	**array = ft_split(av[1], av[2][0]);
		int	i = 0;
		if (array)
		{
			while (array[i])
			{
				printf("%s.\n", array[i]);
				free(array[i]);
				i++;
			}
			free(array);
		}
	}
}*/
