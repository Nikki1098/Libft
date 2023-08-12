/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:32:47 by nikki             #+#    #+#             */
/*   Updated: 2023/08/12 20:36:20 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long    number;

    number = (long)n;
    if (number < 0)
    {
        ft_putchar_fd('-', fd);
        number *= -1;
    }
    if (number > 9)
        ft_putnbr_fd(number / 10, fd);
    ft_putchar_fd(number % 10 + 48, fd);
}