/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:22:48 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/05 11:36:53 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest == NULL || src == NULL)
		return (NULL);
	d = (char *)dest;
	s = (const char *)src;
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
