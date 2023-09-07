/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstooss <nstooss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:15:32 by nstooss           #+#    #+#             */
/*   Updated: 2023/09/07 13:02:58 by nstooss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*pointer;

	total = nmemb * size;
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	if (nmemb < 0 || size < 0)
		return (NULL);
	pointer = malloc(total);
	if (pointer == NULL)
		return (NULL);
	ft_memset((unsigned char *)pointer, 0, total);
	return (pointer);
}

//int main(void)
//{
//	unsigned long max = SIZE_MAX;
//	printf("<%ld>", max);
//	return 0;
//}
//int	main(void)
//{
//	size_t	nmemb = 5;
//	size_t	size = sizeof(int);
//
//	int *arr_ft = (int *)ft_calloc(-5, -5);
//	if (arr_ft == NULL)
//	{
//		printf("ft_calloc failed to allocate memory.\n");
//	}
//	printf("ft_calloc seems to have allocated memory.\n");
//	int *arr_calloc = (int *)calloc(-5, -5);
//	if (arr_calloc == NULL)
//	{
//		printf("calloc failed to allocate memory.\n");
//		return 1;
//	}
//	if (memcmp(arr_ft, arr_calloc, nmemb * size) == 0)
//		printf("Memory allocated by ft_calloc and calloc is the same.\n");
//	else
//		printf("Memory is different.\n");
//	free(arr_calloc);
//	free(arr_ft);
//	return 0;
//}
