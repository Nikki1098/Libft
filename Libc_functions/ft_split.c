/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:22:56 by nikki             #+#    #+#             */
/*   Updated: 2023/08/15 06:19:38 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  get_word_count(char *s, char delimiter)
{
    int count;

    count = 1;
    if (ft_strlen(s) == 0)
        return (0);
    while (*s != '\0')
    {
        if (*s == delimiter)
        {
            count++;
            while (*s == delimiter)
                s++;
        }
        s++;
    }
    return (count);
}



char    **ft_split(char const *s, char c)
{
    int     word_count;
    char    *trimmed_str;
    char    **result;
}