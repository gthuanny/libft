/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:13:40 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/14 10:23:58 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*📘 Descrição em português

ft_isalnum combina as duas anteriores: verifica se o caractere é letra (A–Z, a–z) ou número (0–9).
É útil em verificações de identificadores (nomes de variáveis, logins, etc.), que não podem conter símbolos.

📗 English description

ft_isalnum checks whether a character is alphanumeric, i.e., a letter or a digit.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
