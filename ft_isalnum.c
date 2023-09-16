/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:15:48 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/07 13:04:41 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c) //should give a nonzero value if its in the class
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
//
//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	char c = '$';
//
//	printf("expected return <%d>\nmy return <%d>\n", isalnum(c), ft_isalnum(c));
//	return (0);
//}