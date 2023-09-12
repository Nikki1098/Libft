/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:20:45 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/11 09:25:24 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
//
//int main(void)
//{
//	t_list *new;
//	int data = 42;
//
//	new = ft_lstnew(&data);
//	printf("%d\n", *(int *)(new->content));
//	return 0;
//}
//
