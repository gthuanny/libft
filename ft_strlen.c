/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:30:10 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/14 10:31:10 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*📘 Descrição em português

ft_strlen calcula o comprimento de uma string, isto é, o número de caracteres antes do caractere nulo \0.
Ela percorre a string caractere por caractere até encontrar o final.
É útil para saber quanto espaço você precisa alocar para copiar ou manipular uma string.

📗 English description

ft_strlen returns the number of characters in a string, not counting the null terminator \0.
It loops through the string until it reaches the null byte.*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
