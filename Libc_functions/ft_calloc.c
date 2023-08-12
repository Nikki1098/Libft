/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:28:37 by nikki             #+#    #+#             */
/*   Updated: 2023/08/12 16:34:31 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *pointer;

    pointer = malloc(nmemb * size);
    if (pointer == NULL)
        return (NULL);
    ft_bzero(pointer, nmemb * size);
    return (pointer);
}