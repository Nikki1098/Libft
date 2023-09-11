/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:43:30 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/05 11:36:31 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		i;
	size_t		len;
	int			result;
	int			*ptr;

	if (haystack == NULL || needle == NULL)
	{
		ptr = NULL;
		*ptr = 42;
		exit(1);
	}
	i = 0;
	len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	if (n < len)
		return (NULL);
	while (i <= n - len && haystack[i])
	{
		result = ft_strncmp((char *)haystack + i, needle, len);
		if (result == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
