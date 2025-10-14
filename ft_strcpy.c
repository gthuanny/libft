/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:39:28 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/14 11:42:36 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*📘 Descrição em português

ft_strlcpy copia uma string (src) para outra (dst), sem ultrapassar o tamanho do destino.
Ela garante que a string de destino sempre termine com \0, mesmo que a origem seja maior.
Retorna o comprimento total da origem, permitindo detectar truncamentos.

📗 English description

ft_strlcpy copies a string from src to dst, ensuring null-termination and avoiding buffer overflow.
It returns the total length of src, regardless of the limit.*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
