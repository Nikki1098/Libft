/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:34:19 by nikki             #+#    #+#             */
/*   Updated: 2023/08/30 12:37:04 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int    i;

    if (!s || !f)
        return ;
    i = 0;
    while (s[i])
    {
        f(i, s + i);
        i++;
    }
}