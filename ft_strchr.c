/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:49:44 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/20 17:51:22 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*📘 Descrição em português

ft_strchr procura a primeira ocorrência de um caractere c em uma string s.
Retorna um ponteiro para o caractere encontrado ou NULL se não existir.
Se c for '\0', retorna um ponteiro para o final da string.

📗 English description

ft_strchr returns a pointer to the first occurrence of character c in string s, or NULL if not found. 🪄 Uso no mundo real: encontrar o primeiro “@” em um endereço de e-mail.*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
/* 
int main(int argc, char **argv)
{
	(void) argc;
	
	char *res;
	int search = argv[2][0];
	
	printf("\n\t>>> : USING strchr() <<<\n\n");
	
	res = strchr(argv[1], search);
	printf("Result:\n\tres = \'%s\'\n", res);
	
	printf("\n\t>>> : USING ft_strchr() <<<\n\n");
	
	res = ft_strchr(argv[1], search);
	printf("Result:\n\tres =  \'%s\'\n", res);
}
 */
