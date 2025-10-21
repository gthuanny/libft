/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:49:44 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/21 10:49:48 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
