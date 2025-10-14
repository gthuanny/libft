/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:24:45 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/14 10:26:09 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*📘 Descrição em português

ft_isascii verifica se o valor do caractere está dentro da tabela ASCII padrão (0 a 127).
Isso é importante para garantir compatibilidade em sistemas que não lidam bem com caracteres fora desse intervalo, como acentos ou emojis.

📗 English description

ft_isascii tests whether a value fits into the standard ASCII range (0–127).
Useful when ensuring data remains portable across systems.*/

#include "libft.h"

int ft_isascii(int c)
{
	return(c >= 0 && c<= 127);
}
