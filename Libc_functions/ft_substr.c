/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:07:59 by nikki             #+#    #+#             */
/*   Updated: 2023/08/12 20:14:20 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *sub;
    unsigned int    i;

    i = 0;
    sub = (char *)malloc(len + 1);
    if (sub == NULL)
        return (NULL);
    if((unsigned int)ft_strlen(s) <= start)
        return (sub);
    while (s[start] != '\0' && i < len)
    {
        sub[i] = s[start];
        i++;
        start++;
    }
    sub[i] = '\0';
    return (sub);
}