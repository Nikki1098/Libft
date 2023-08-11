/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 22:32:47 by nikki             #+#    #+#             */
/*   Updated: 2023/08/11 22:49:56 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    *pointer;

    pointer = (char *)s;
    while (*pointer != '\0')
    {
        if (*pointer == c)
            return (pointer);
        pointer++;
    }
    if (*pointer == '\0' && c == '\0')
        return (pointer);
    return (NULL);
}