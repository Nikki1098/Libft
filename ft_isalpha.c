/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:16:36 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/05 11:37:02 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	char c = 'Z';
//
//	printf("expected return <%d>\nmy return <%d>\n", isalpha(c), ft_isalpha(c));
//	return (0);
//}