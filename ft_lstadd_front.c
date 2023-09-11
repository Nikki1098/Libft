/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:05:29 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/11 09:25:31 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

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
//	while (current != NULL)
//	{
//		printf("%s\n", (char *)current->content);
//		current = current->next;
//	}
//	free(element1);
//	free(element2);
//	return 0;
//}
