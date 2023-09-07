/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:43:56 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/07 13:51:56 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)s;
	if (!ft_isascii(c))
		return ((char *)s);
	if (c == 0)
		return (NULL);
	if (!*s)
		return (malloc(0));
	while (s[i] != '\0')
		i++;
	if (i < 1)
		return ((char *)s);
	while (i != -1)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i--;
	}
	return (NULL);
}

//int main(int argc, char **argv)
//{
//	int nb;
//	if (argc < 2)
//		return (0);
//	nb = ft_atoi(argv[2]);
//	printf ("<%s>", ft_strrchr(argv[1], nb));
//	printf ("Expected <%s>", strrchr(argv[1], nb));
//	return (0);
//}
