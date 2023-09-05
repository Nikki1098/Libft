/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:20:53 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/05 09:19:26 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new); 
}

int main(void)
{
	t_list *my_list = NULL;
	int data = 42;
	t_list *new_element = ft_lstnew(&data);
	
	if (new_element == NULL)
	{
		printf("Fehler beim Erstellen des Elements.\n");
		exit(1);
	}
	my_list = new_element;
	t_list *current = my_list;
	while (current != NULL)
	{
		int *content = (int *)(current->content);
		printf("Inhalt: %d\n", *content);
		current = current->next;
	}
	return 0;
}