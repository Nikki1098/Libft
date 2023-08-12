/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:59:06 by nikki             #+#    #+#             */
/*   Updated: 2023/08/12 11:17:11 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;

    if (dest > src)
    {
        i = (int)n - 1;
        while (i >= 0)
        {
            ((char *)dest)[i] = ((char *)src)[i];
            i--;
        }
    }
    else
        ft_memcpy(dest, src, n);
    return (dest);
}