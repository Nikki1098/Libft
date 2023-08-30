/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:31:59 by nikki             #+#    #+#             */
/*   Updated: 2023/08/30 14:31:11 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int     start;
    int     end;
    char    *str;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(s1) - 1;
    while (ft_strchr(set, s1[start]) && start <= end)
        start++;
    if (start > end)
    while (ft_strchr(set, s1[end]) && end >= 0)
        end--;
    str = malloc(end - start + 2);
    if (!str)
        return (NULL);
    ft_strlcpy(str, &s1[start], end - start + 2);
    return (str);
}