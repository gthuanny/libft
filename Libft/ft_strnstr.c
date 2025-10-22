/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:40:51 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/22 11:42:06 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-termi‐
nated string little in the string big, where not more than len characters
are searched.  Characters that appear after a ‘\0’ character are not
searched.  Since the strnstr() function is a FreeBSD specific API, it
should only be used when portability is not a concern.
If little is an empty string, big is returned; if little occurs nowhere
in big, NULL is returned; otherwise a pointer to the first character of
the first occurrence of little is returned.

If little is an empty string, big is returned; if little occurs nowhere
in big, NULL is returned; otherwise a pointer to the first character of
the first occurrence of little is returned.
*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;	

	if ((!big || !little) && len == 0)
		return (NULL);
	i = 0;
	little_len = ft_strlen(little);
	if (!little[0])
		return ((char *)big);
	while (big[i] != '\0' && i <= len - little_len && len > 0)
	{
		if (big[i] == little[0])
			if (!ft_memcmp(big + i, little, little_len))
				return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/* 
int main(int argc, char **argv)
{	
	(void)argc;
	
	int n = atoi(argv[3]);
	char *res = ft_strnstr(argv[2], argv[1], n);

	printf("Sending argv[1] = \'%s\'\n", argv[1]);
	printf("Sending argv[2] = \'%s\'\n", argv[2]);
	printf("Sending argv[3] = %d\n", n);

	if(!res)
		printf("\'%s\' is not in %d bytes of \'%s\'\n", argv[1], n, argv[2]);
	else
		printf("Found: '%s'\n", res);
}
 */
