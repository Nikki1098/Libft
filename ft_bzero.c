/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:05:17 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/06 09:53:17 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, '\0', n);
}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "Hallo mein name ist Niklas";
//	char str2[] = "Hallo mein name ist Niklas";
//	size_t i = 0;
//
//	printf("before memset the memory includes <%s>\n", str);
//	printf("Memory before bzero:\n");
//	while (i < sizeof(str))
//	{
//		printf("%02x ", (unsigned char)str[i]);
//		i++;
//	}
//	printf("\n");
//	ft_bzero(str, 9);
//	bzero(str2, 8);
//	printf("Expectet output <%s>\nMy output <%s>\n", str2, str);
//	printf("Memory after bzero:\n");
//	i = 0;
//	while (i < sizeof(str)) 
//	{
//		printf("%02x ", (unsigned char)str[i]);
//		i++;
//	}
//	printf("\n");
//	return (0);
//}