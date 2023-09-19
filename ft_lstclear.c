/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:38:28 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/17 10:33:59 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static void free_data(void *data)
//{
//	if (data != NULL)
//		data = NULL;
//}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	ft_lstclear(&(*lst)->next, del);
	(del)((*lst)->content);
	free(*lst);
	*lst = NULL;
}
//
//#include <stdio.h>
//
//int main(void)
//{
//	t_list *list = NULL;
//	
//	t_list *element1 = ft_lstnew("First");
//	t_list *element2 = ft_lstnew("second");
//
//	ft_lstadd_front(&list, element1);
//	ft_lstadd_front(&list, element2);
//	
//	t_list *current = list;
//	printf("Before clearing:\n");
//	while (current != NULL)
//	{
//		printf("%s\n", (char *)(current->content));
//		current = current->next;
//	}
//	
//	ft_lstclear(&list, free_data);
//	printf("After clearing:\n");
//	current = list;
//	while (current != NULL)
//	{
//		printf("%s\n", (char *)(current->content));
//		current = current->next;
//	}
//	if (list == NULL)
//		printf("There is no content in the list\n");
//	else
//		printf("List is not empty\n");
//	return 0;
//}
//
