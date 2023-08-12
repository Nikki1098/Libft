/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:18:35 by nikki             #+#    #+#             */
/*   Updated: 2023/08/12 12:27:08 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *buffer;

    buffer = (char *)s;
    i = 0;
    while (i < n)
    {
        if (buffer[i] == c)
            return (buffer + i);
        i++;
    }
    return (NULL);
}