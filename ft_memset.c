/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:24:11 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/05 11:36:51 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// 
// #include <stdio.h>
// 
// int main(void)
// {
// char str[] = "Hallo mein name ist Niklas";
// char str2[] = "Hallo mein name ist Niklas";
// 
// printf("before memset the memory includes <%s>\n", str);
// ft_memset(str, 's', 6);
// memset(str2, 's', 6);
// printf("Expectet output <%s>\nMy output <%s>\n", str2, str);
// return (0);
// }