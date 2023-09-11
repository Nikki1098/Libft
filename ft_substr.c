/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:46:18 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/05 11:36:25 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	create_sub(char const *s, char *sub, unsigned int start, size_t len)
{
	unsigned int	i;

	i = 0;
	while (s[start] != '\0' && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			str_len;

	if (!s || (size_t)start >= ft_strlen(s))
	{
		sub = (char *)malloc(1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	str_len = ft_strlen(s);
	if (len > str_len - start)
		len = str_len - start;
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	create_sub(s, sub, start, len);
	return (sub);
}
