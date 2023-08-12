/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:35:55 by nikki             #+#    #+#             */
/*   Updated: 2023/08/12 16:40:15 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *dup;
    size_t  i;

    i = 0;
    dup = (char *)malloc(ft_strlen(s) + 1);
    if (dup == NULL)
        return (NULL);
    while (s[i] != 0)
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}