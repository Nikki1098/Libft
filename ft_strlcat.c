/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:32:33 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/05 11:36:39 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t maxlen)
{
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (destlen > maxlen)
		destlen = maxlen;
	if (destlen == maxlen || maxlen == 0)
		return (destlen + srclen);
	if (srclen < maxlen - destlen)
		ft_memcpy(dest + destlen, src, srclen + 1);
	else
	{
		ft_memcpy(dest + destlen, src, maxlen - destlen - 1);
		dest[maxlen - 1] = '\0';
	}
	return (destlen + srclen);
}
