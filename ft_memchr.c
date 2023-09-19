/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:20:30 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/06 13:07:53 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buffer;
	unsigned char	character;

	buffer = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*buffer == character)
			return (buffer);
		i++;
		buffer++;
	}
	return (NULL);
}
//
//#include <stdio.h>
//
//int main(void)
//{
//	char string[50] = "hallo mein name ist niklas und ich will y suchen";
//	char c = 'y';
//	char *result;
//
//	result = ft_memchr(string, c, 50);
//	printf("%s\n", result);
//	return (0);
//}
