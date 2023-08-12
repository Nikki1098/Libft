/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:19:36 by nikki             #+#    #+#             */
/*   Updated: 2023/08/12 13:54:51 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t      i;
    int         result;

    i = 0;
    result = ft_strncmp(haystack, needle, n);
    if (!*needle)
        return ((char *)haystack);
    if (ft_strlen(haystack) < ft_strlen(needle) || n == 0)
        return (NULL);
    if (result == 0)
        return ((char *)haystack);
    while (result != 0 && i < n && n - i >= ft_strlen(needle))
    {
        result = ft_strncmp((char *)haystack + i, needle, ft_strlen(needle));
        if (result == 0)
            return ((char *)haystack + i);
        i++;
    }
    return (0);
}