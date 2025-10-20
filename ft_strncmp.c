/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:12:01 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/20 18:12:57 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*📘 Descrição em português

ft_strncmp compara até n caracteres de duas strings.
Retorna:

0 se forem iguais até n caracteres;

valor negativo se s1 < s2;

valor positivo se s1 > s2.
Usa-se muito para comparar prefixos.

📗 English description

ft_strncmp compares up to n characters of two strings.
It returns 0 if equal, <0 if s1 < s2, >0 if s1 > s2.
🪄 Uso no mundo real: verificar se uma URL começa com "http".*/
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
