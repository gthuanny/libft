/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:05:32 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/28 16:06:22 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocate and return a new string which 
is the concatenation of s1 followed by s2.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	int		count;
	char	*str;

	i = 0;
	k = 0;
	count = 0;
	while (s1[i++])
		count++;
	i = 0;
	while (s2[i++])
		count++;
	str = malloc(count + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
		str[k++] = s1[i++];
	i = 0;
	while (s2[i])
		str[k++] = s2[i++];
	str[k] = '\0';
	return (str);
}
/*
int	main(void)
{
    char	*str1 = "para ";
    char	*str2 = "testar";
    char	*result = ft_strjoin(str1, str2);
    printf("joined: %s\n", result);    
    free(result);
    return 0;
}*/
