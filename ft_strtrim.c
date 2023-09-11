/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:45:37 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/09 09:05:37 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		end = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > front)
			end--;
		str = (char *)malloc(sizeof(char) * (end - front + 1));
		if (str == NULL)
			return (NULL);
		if (str)
			ft_strlcpy(str, &s1[front], end - front + 1);
	}
	return (str);
}

//int main(void)
//{
//	const char *string = "lorem ipsum dolor sit amet";
//	const char *set = "te";
//
//	printf("mine <%s>\n", ft_strtrim(string, set));
//	return 0;
//}