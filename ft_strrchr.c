/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:43:56 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/07 14:44:30 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)s;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	if (!*s)
		return (NULL);
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
//
//int main(void)
//{
//	char *src = ""
//	int nb;
//	nb = 1;
//	printf ("<%lc>\n", ft_strrchr(src, L'\xe2\x80\x93'));
//	printf ("<%lc>\n", strrchr(src, L'\xe2\x80\x93'));
//	return (0);
//}
//
