/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:36 by nikki             #+#    #+#             */
/*   Updated: 2023/08/30 12:43:04 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *str;

    i = 0;
    str = (char *)malloc(ft_strlen(s) + 1);
    if (!s || !f)
        return (0);
    if (!str)
        return (0);
    while (s[i])
    {
        str[i] = f(i, (char)s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}