/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:51:45 by nikki             #+#    #+#             */
/*   Updated: 2023/08/09 16:10:30 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    char    *str;
    size_t  i;

    str = (char *)b;
    i = 0;
    while (i < len)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (b);
}