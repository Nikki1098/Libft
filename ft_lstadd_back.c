/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:30:20 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/16 20:43:09 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
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
//	ft_lstadd_back(&list, element1);
//	ft_lstadd_back(&list, element2);
//	
//	t_list *current = list;
//	while (current != NULL)
//	{
//		printf("%s\n", (char *)current->content);
//		current = current->next;
//	}
//	free(element1);
//	free(element2);
//	return 0;
//}