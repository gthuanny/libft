/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:40:38 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/20 17:49:29 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*📘 Descrição em português

ft_strlcat concatena (anexa) a string src ao final de dst, garantindo que o total não exceda dstsize.
Retorna o tamanho total que teria sido criado, mesmo que truncado.
É útil para juntar partes de texto com segurança.

📗 English description

ft_strlcat appends the string src to the end of dst, ensuring the final string is null-terminated and within dstsize.*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int main(){
	char dest[10] = "Hello";
	char src[] = "World";
	
	printf("Sending str1 = \"%s\" and str2 = \"%s\"\n", dest, src); 
	int res = ft_strlcat(dest, src, 1);
	
	printf("strlcat return = %d\n", res);
	printf("Returning str1 = \"%s\" and str2 = \"%s\"\n", dest, res, src); 
}
*/
