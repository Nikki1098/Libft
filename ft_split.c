/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikki <nikki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:29:07 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/09 10:20:04 by nikki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}

static size_t	get_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
}

static char	**split(char const *s, char c, char **array, size_t wordcount)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < wordcount)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(array + i) = ft_substr(s, j, get_len((s + j), c));
		if (!*(array + i))
		{
			free_array(i, array);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = countword(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
	{
		free(array);
		return (NULL);
	}
	array = split(s, c, array, words);
	return (array);
}
//
//#include <stdio.h>
//
//int main(void)
//{
//	char *str = "hello my name is niklas";
//	char **array = NULL;
//
//	array = ft_split(str, ' ');
//	if (array == NULL)
//		return (1);
//	char **temp = array;
//	while (*temp)
//	{
//		printf("%s\n", *temp);
//		*temp++;
//	}
//	free_array(countword(str, ' '), array);
//	return (0);
//}
//
