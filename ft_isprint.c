/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:26:28 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/14 10:27:39 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*📘 Descrição em português

ft_isprint verifica se o caractere é imprimível, ou seja, visível na tela (espaço até ~, códigos 32–126).
Exclui caracteres de controle como \n, \t ou \r.

📗 English description

ft_isprint checks if a character is printable, including space (codes 32–126).*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
