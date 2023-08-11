/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 22:57:37 by nikki             #+#    #+#             */
/*   Updated: 2023/08/11 23:27:46 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *pointer;
    int     len;

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