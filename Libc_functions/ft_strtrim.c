/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:31:59 by nikki             #+#    #+#             */
/*   Updated: 2023/08/18 13:01:49 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_char_in_set(char const *set, char c)
{
    while (*set != '\0')
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}


char    *ft_strtrim(char const *s1, char const *set)
{
}