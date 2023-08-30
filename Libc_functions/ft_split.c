/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:47:00 by nikki             #+#    #+#             */
/*   Updated: 2023/08/30 12:47:16 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   countword(char const *s, char c)
{
    size_t  count;

    if (!*s)
        return (0);
    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
            count++;
        while (*s != c && *s)
            s++;
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    size_t      word_len;
    char        **result;
    int         i;

    result = (char **)malloc((countwords(s, c) + 1) * sizeof(char *));
    if (result == NULL)
        return (NULL);
    if (!s || !result)
        return (0);
    i = 0;
    while (*s)
    {
        while (*s == c && *s)
            s++;
        if (*s)
        {
            if (!ft_strchr(s, c))
                word_len = ft_strlen(s);
            else
                word_len = ft_strchr(s, c);
            result[i++] = ft_substr(s, 0, word_len);
            s += word_len;
        }
    }
    result[i] = '\0';
    return (result);
}