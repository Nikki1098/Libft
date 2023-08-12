/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:27:48 by nikki             #+#    #+#             */
/*   Updated: 2023/08/12 12:07:10 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t maxlen)
{
    size_t  srclen;
    size_t  destlen;

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