/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:22:13 by nikki             #+#    #+#             */
/*   Updated: 2023/08/30 12:43:08 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int nbnb(int nb)
{
    size_t  len;

    len = 0;
    if (nb <= 0)
        len++;
    while (nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    int     i;
    char    *str;

    i = nbnb(n);
    str = malloc(sizeof(char) * (i +1));
    if (str == NULL)
        return (NULL);
    str[i--] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (n < 0)
        str[0] = '-';
    while (n != 0)
    {
        if (str[0] == '-')
            str[i--] = '0' + -(n % 10);
        else
            str[i--] = '0' + (n % 10);
        n = n / 10;
    }
    return (str);
}