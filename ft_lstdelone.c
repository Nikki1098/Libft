/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:34:13 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/11 09:37:46 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void delete_content(void *data)
{
	free(data);
	data = NULL;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}

#include <stdio.h>

int main(void)
{
	t_list *list = NULL;

	t_list *element1 = ft_lstnew("Hallo");
	t_list *element2 = ft_lstnew("Ich");
	t_list *element3 = ft_lstnew("bin");
	t_list *element4 = ft_lstnew("Niklas");

	ft_lstadd_back(&list, element1);
	ft_lstadd_back(&list, element2);
	ft_lstadd_back(&list, element3);
	ft_lstadd_back(&list, element4);

	t_list *current = list;
	printf("Before clearing:\n");
	while (current != NULL)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}
	current = list;
	while (current != NULL)
	{
		if (current == element2)
		{
			ft_lstdelone(current, delete_content);
			break;
		}
		current = current->next;
	}
	printf("After clearing:\n");
	current = list;
	while (current != NULL)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}
	if (list == NULL)
		printf("There is no content in the list\n");
	else
		printf("List is not empty\n");
	return (0);
}
