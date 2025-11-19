/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:31:57 by gde-cast          #+#    #+#             */
/*   Updated: 2025/11/14 20:18:57 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

/*int main(void)
{
    char *data1 = "Teste de Conteúdo";
    int data2 = 100;
    t_list *node1;
    t_list *node2;

    printf("Iniciando o teste de ft_lstnew.\n");

    // Teste 1
    node1 = ft_lstnew(data1);
    if (node1 == NULL)
    {
        printf("ERRO: Falha na alocação do nó 1.\n");
        return (1);
    }
    printf("Nó 1 criado. Conteúdo: %s\n", (char *)node1->content);

    // Teste 2
    node2 = ft_lstnew(&data2);
    if (node2 == NULL)
    {
        printf("ERRO: Falha na alocação do nó 2.\n");
        free(node1);
        return (1);
    }
    printf("Nó 2 criado. Conteúdo: %d\n", *(int *)node2->content);

    // Limpeza
    free(node1);
    free(node2);

    printf("Teste concluído e memória liberada.\n");
    return (0);
}*/
