/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:43:56 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/06 14:42:32 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	if (!ft_isascii(c))
		return (NULL);
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	else
		return ((char *)ptr);
}

//int main(int argc, char **argv)
//{
//	int nb;
//	if (argc < 2)
//		return (0);
//	nb = ft_atoi(argv[2]);
//	printf ("<%s>", ft_strrchr(argv[1], nb));
//	return (0);
//}
//
//
