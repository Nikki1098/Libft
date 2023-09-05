/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:43:56 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/05 11:36:29 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	int		len;

	len = ft_strlen(s);
	pointer = (char *)s + len - 1;
	if (c == '\0')
	{
		pointer++;
		return (pointer);
	}
	while (len != 0)
	{
		if (*pointer == c)
			return (pointer);
		len--;
		pointer--;
	}
	return (NULL);
}
