/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:00:44 by nikki             #+#    #+#             */
/*   Updated: 2023/08/15 06:24:42 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t          i;
    unsigned char   *buffer1;
    unsigned char   *buffer2;

    i = 0;
    buffer1 = (unsigned char *)s1;
    buffer2 = (unsigned char *)s2;
    while (i != n)
    {
        if (buffer1[i] != buffer2[i])
            return (buffer1[i] - buffer2[i]);
        i++;
    }
    return (0);
}