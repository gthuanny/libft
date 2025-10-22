/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:40:38 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:49:03 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Append src to string dst of size dstsize (NUL-terminates if dstsize > 0).
Returns initial length of dst plus length of src
(best practice: check return against dstsize).*/

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
