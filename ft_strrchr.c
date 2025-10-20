/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:09:00 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/20 18:10:20 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*📘 Descrição em português

ft_strrchr faz o mesmo que ft_strchr, mas retorna a última ocorrência do caractere c.
Útil quando você quer o último “/” em um caminho de arquivo, por exemplo.

📗 English description

ft_strrchr returns a pointer to the last occurrence of character c in string s.*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == c)
			return ((char *)s + i);
		if (i == 0)
			return (NULL);
		i--;
	}
}
