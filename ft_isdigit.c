/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:07:28 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/14 10:23:17 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*📘 Descrição em português

ft_isdigit verifica se o caractere é um dígito numérico, entre '0' e '9'.
É usada em conversões de texto para número, como em ft_atoi, ou para validar que um campo contém apenas números.

📗 English description

ft_isdigit checks if a character is a decimal digit (0–9).
Often used when parsing numeric input or validating numeric strings.*/ 

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
