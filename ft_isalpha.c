/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:32:11 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/14 10:22:00 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*📘 Descrição em português

ft_isalpha verifica se o caractere fornecido é uma letra do alfabeto, maiúscula (A-Z) ou minúscula (a-z).
Internamente, a função compara o valor ASCII do caractere com os intervalos correspondentes.
É útil em programas que precisam validar entradas de texto, como nomes de usuários, palavras, etc.

📗 English description

ft_isalpha checks whether the given character is an alphabetic character (uppercase A–Z or lowercase a–z).
It returns 1 if true, otherwise 0. It’s typically used in text parsing or input validation.*/

#include "libft.h" 

int ft_isalplha(int c) 
{ 
	return((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

