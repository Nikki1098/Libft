/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:27:05 by nikki             #+#    #+#             */
/*   Updated: 2023/08/12 10:56:49 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d;
    char *s;

    d = (char *)dest;
    s = (char *)src;
    while (n)
    {
        *d++ = *s++;
        n--;
    }
    return (dest);
}