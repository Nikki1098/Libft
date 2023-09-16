/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:19:40 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/05 11:36:58 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// I need to check how long the number is to allocate enough space for it.
static int	get_number_len(int nb)
{
	size_t	len;

	len = 0;
	if (nb <= 0)
		len++; //if the number is negative i need one spot for the -
	while (nb != 0)
	{
		nb = nb / 10; //remove the last digit
		len++;
	}
	return (len);
}

char	*ft_itoa(int n) //converts an int to a string
{
	int		i;
	char	*str;

	i = get_number_len(n);
	str = malloc(sizeof(char) * (i + 1));//allocate memory for string
	if (str == NULL)
		return (NULL);
	str[i--] = '\0'; //Null-terminate the string
	if (n == 0) // the number is 0, set first char to 0
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';//negative number -> first char '-'
	while (n != 0)
	{
		if (str[0] == '-') //check if first char is -
			str[i--] = '0' + -(n % 10); //- converts the negative into positive 
		else
			str[i--] = '0' + (n % 10); //'0' because I need to start at ascii 0
		n = n / 10; //removes last digit
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	int nb = -1928347;

	printf("My output <%s>\n",ft_itoa(nb));
	return (0);
}